#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void heapify(vector<int> &arr, int rootIndex) {
    int leftIndex = 2 * rootIndex + 1;
    int rightIndex = 2 * rootIndex + 2;
    int minimum = rootIndex;

    if (leftIndex < arr.size() && arr[minimum] > arr[leftIndex]) {
        minimum = leftIndex;
    }
    if (rightIndex < arr.size() && arr[minimum] > arr[rightIndex]) {
        minimum = rightIndex;
    }
    if (minimum != rootIndex) {
        swap(arr[minimum], arr[rootIndex]);
        heapify(arr, minimum);
    }
}

void insert(vector<int> &arr, int data) {
    arr.push_back(data);
    int index = arr.size() - 1;
    int parentIndex = (index - 1) / 2;
    while (index > 0 && arr[parentIndex] > arr[index]) {
        swap(arr[index], arr[parentIndex]);
        index = parentIndex;
        parentIndex = (index - 1) / 2;
    }
}

void deleteElement(vector<int>& arr, int element) {
    auto it = find(arr.begin(), arr.end(), element);
    if (it != arr.end()) {
        int index = distance(arr.begin(), it);
        swap(arr[index],arr[arr.size()-1]);
        arr.pop_back();
        heapify(arr, index);
    }
}

int main() {
    int Qnum;
    cin >> Qnum;
    vector<int> arr;
    for (int i = 0; i < Qnum; i++) {
        int query;
        cin >> query;
        int data;
        switch (query) {
            case 1:
                cin >> data;
                insert(arr, data);
                break;
            case 2:
                cin >> data;
                deleteElement(arr, data);
                break;
            case 3:
                cout << arr[0] << endl;
                break;
        }
    }
    return 0;
}
