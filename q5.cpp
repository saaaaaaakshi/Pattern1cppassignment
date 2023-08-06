// *
// **
// ***
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n";
    cin>>n;
    //for upper half
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //for lower half
    for(int i=n;i>1;i--){
        for(int j=0;j<i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}