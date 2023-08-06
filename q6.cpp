#include<iostream>
using namespace std;
int main(){
    int row,colm;
    cout<<"Enter no. of rows:";
    cin>>row;
    cout<<"Enter no. of columns:";
    cin>>colm;
    for(int i=0;i<row;i++){
        for(int j=0;j<colm;j++){
            if((i==0) || (i==row-1)||(j==0) ||(j==colm-1))
                cout<<"*";
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}