//Linear Search Using Vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
//Taking The Size Of Vector
    int n;
    cout<<"Enter Your Vector Size:"<<endl;
    cin>>n;
//Taking The Values Of Vector
    vector <int> vec(n);
    cout<<"Enter Your Vector Here:"<<endl;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
//Taking The Digit To Find 
    int count=0;      //Using Count For Incase Of Element Not Found
    int x;
    cout<<"Enter Your Element To Find:";
    cin>>x;
    for(int i=0;i<n;i++){
        if(vec[i]==x){
            cout<<"Your Element Found At"<<" "<<i+1<<endl;
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"Your Element Is Not Exist In This Vector"<<endl;
    }
    return 0;
}