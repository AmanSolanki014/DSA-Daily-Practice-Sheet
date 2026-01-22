#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=7;
    int maxsum=INT_MIN;
    for(int st=0;st<n;st++){
        int currsum=0;
        for(int end=st;end<n;end++){
            currsum += arr[end];
            maxsum=max(maxsum,currsum);
            if(currsum<0){
                currsum=0;
            }
        }
    }
    cout<<"The Maximum Sum Of Subarray Is:"<<maxsum<<endl;
    return 0;
}