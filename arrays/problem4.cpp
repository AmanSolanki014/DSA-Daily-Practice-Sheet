#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5];
    int size=5;
    cout<<"Enter Your Array Here:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    //To Find The Minimum Number Of An Array
    int x=INT_MAX;
    int minindex=0;
    for(int i=0;i<size;i++){
        if(x>arr[i]){
            x=arr[i];
            minindex=i;
        }
    }
    cout<<"Minimun Number "<<x<<" Found At "<<minindex+1<<endl;
    //To Find The Maximum Number Of An Array
    int y=INT_MIN;
    int maxindex=0;
    for(int i=0;i<size;i++){
        if(y<arr[i]){
            y=arr[i];
            maxindex=i;
        }
    }
    cout<<"Maximum Number "<<y<<" Found At "<<maxindex+1<<endl;

    cout<<"Array Before Swap:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    swap(arr[minindex],arr[maxindex]);  //For Swaping Minimum And Maximum Number From The Array

    //For Printing The Final Array
    cout<<"Array After Swap:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}