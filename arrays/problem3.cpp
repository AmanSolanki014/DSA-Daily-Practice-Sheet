#include<iostream>
using namespace std;

// For Sum Of Array
int sumofArr(int arr[],int size){
    int X=0;
    for(int i=0;i<size;i++){
        X=arr[i]+X;
    }
    return X;
}
//For Product Of Array
int proofArr(int arr[],int size){
    int Y=1;
    for(int i=0;i<size;i++){
        Y=arr[i]*Y;
    }
    return Y;
}

int main(){
    int arr[5];
    int size=5;
    cout<<"Enter Your Array Here:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"This Is The Sum Of Your Array:"<<sumofArr(arr,size)<<endl;
    cout<<"This Is The Product Of Your Array:"<<proofArr(arr,size)<<endl;

    return 0;
}
