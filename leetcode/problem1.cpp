#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec={2,6,4,7};
    int n=4;
    int x=9;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vec[i]+vec[j]==x){
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
    return 0;
}