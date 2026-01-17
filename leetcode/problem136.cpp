#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={1,1,5,4,4};
//Finding the unique number from the vector
    int ans=0;
    for(int j:vec){
        ans=ans^j;
    }
    cout<<"This is your unique number:"<<ans;
    return 0;
}