#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int size=10;
    cout<<"Enter Your Elements Here:"<<endl;
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int x;

    cout<<"Enter Your Element To Find:"<<endl;
    cin>>x;

    for(int i=0;i<size;i++){
        if(x==arr[i]){
            cout<<"Your Element Found at"<<" "<<i+1<<endl;
        }
    }

    return 0;
}