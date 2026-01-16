#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int size=5;

    cout<<"Enter Your Data Here:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"This Is Your Array:";
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }

    int start=0;
    int last=size-1;
    while(start<=last){
        swap(arr[start],arr[last]);
        start++;
        last--;
    }

    cout<<endl;
    
    cout<<"This Is Your Reverse Array:";
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}