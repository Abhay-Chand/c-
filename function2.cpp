#include<iostream>
using namespace std;
power(int a,int b){
    int ans =1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    cout<<"power of 'a' with respect to 'b' is :"<<ans<<endl;
}
int main(){
    power(5,4);
    power(3,5);
    power(5,2);
}