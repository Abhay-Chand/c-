#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i ;j++){
            cout<<" ";
        }
        for(j=1;j<=2*n-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}