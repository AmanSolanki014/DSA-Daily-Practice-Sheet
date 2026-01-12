#include<iostream>
#include<climits> //required for INT_MAX (+Infinite)
using namespace std;

int main(){
    int nums[5];
    int n=5;
    for(int i=0;i<n;i++){
        cout<<"Enter your Number:";
        cin>>nums[i];
    }
    int smallest= INT_MAX;  //INT_MAX = +Infinite
    for(int i=0;i<n;i++){
        if(smallest>nums[i]){
            smallest=nums[i];
        }
    }
    cout<<"This is your smallest number:"<<smallest<<endl;
    return 0;
}