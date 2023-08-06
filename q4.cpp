#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
   
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0){
                cout<<j+1;
            }
            else{
                cout<<(char(j+65));
            }
        }
        cout<<endl;
    }
}