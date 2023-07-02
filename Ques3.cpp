#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int revnumber =0;
    while(n>0){
        int lastdigit = n%10;
        revnumber =revnumber*10 + lastdigit;
        n /=10;
    }
    cout<<revnumber<<endl;

    return 0;
}