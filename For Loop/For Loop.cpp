#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int upperBound;
    int lowerBound;
    
    cin>>lowerBound>>upperBound;
    //save the string form of numbers
    string numbers[9] ={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=lowerBound;i<=upperBound;++i){
        if(i<=9){
            cout<<numbers[i-1]<<endl;
        }else{
            //folloing lines will use to identify whether number is odd or even 
            if(i%2==0){
                cout<<"even"<<endl;
            }else{
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}