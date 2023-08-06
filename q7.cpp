#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter value of n:";
    cin>>n;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int k=0;k<n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}