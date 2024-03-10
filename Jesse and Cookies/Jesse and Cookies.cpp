#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'cookies' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 */

//this function is used for swaping a element wchich violate the rules in heap to its' relevent position
void heapify(vector<int> &arr, int rootIndex) {
    //getting the index of left and right nodes
    int leftIndex = 2 * rootIndex + 1;
    int rightIndex = 2 * rootIndex + 2;
    int minimum = rootIndex;
    //getting the index of the smallest node out of left right and root
    if (leftIndex < (int)arr.size() && arr[minimum] > arr[leftIndex]) {
        minimum = leftIndex;
    }
    if (rightIndex < (int)arr.size() && arr[minimum] > arr[rightIndex]) {
        minimum = rightIndex;
    }
    //swaping root with smallest and recursively calling heapify 
    if (minimum != rootIndex) {
        swap(arr[minimum], arr[rootIndex]);
        heapify(arr, minimum);
    }
}
//inserting an element to the heap
void insert(vector<int> &arr, int data) {
    //adding element to back 
    arr.push_back(data);
    //sending element to relevent position
    int index = arr.size() - 1;
    int parentIndex = (index - 1) / 2;
    while (index > 0 && arr[parentIndex] > arr[index]) {
        swap(arr[index], arr[parentIndex]);
        index = parentIndex;
        parentIndex = (index - 1) / 2;
    }
}
//getting the root of the heap
int getRoot(vector<int>& arr) {
        int temp = arr[0];
        swap(arr[0],arr[arr.size()-1]);
        arr.pop_back();
        heapify(arr,0);
        return temp;
}

//making the array min heap
void buildMinHeap(vector<int> &arr){
    for(int i= arr.size()/2;i >= 0;--i){
        heapify(arr,i);
    }
}

int cookies(int k, vector<int> A) {
    //first we have to make a min heap
    buildMinHeap(A);
    //we set a variable to count num of iterations
    int iterations =0;
    //continue until all elments greater than k(root>K)
    while(A[0]<k){
        iterations++;
        int sweetness1 = getRoot(A);
        int sweetness2;
        //This will help to return -1 when we can't make cookies having sweetness greater than K 
        if(A.size()==0){
            iterations = -1;
            break;
        }else{
            sweetness2 = getRoot(A);
        }
        insert(A,sweetness1+2*sweetness2);
    }
    return iterations;
}

int main()
{
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string A_temp_temp;
    getline(cin, A_temp_temp);

    vector<string> A_temp = split(rtrim(A_temp_temp));

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        int A_item = stoi(A_temp[i]);

        A[i] = A_item;
    }

    int result = cookies(k, A);

    cout << result << "\n";

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
