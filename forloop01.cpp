//wAP to print sum of first n natural number by for loop
#include<iostream>
using namespace std;
int main(){
 int i,n;
 cin>>n;
 int sum=0;
 for(i=1;i<=n;i++){
    sum+=i;
 }
 cout<<sum<<endl;
 return 0;

}