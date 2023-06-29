//WAP to print the value if it is even and divided by 3
#include<iostream>
using namespace std;
int main(){   
    int num;
    cin>>num;
    if(num%2==0 && num%3==0)
    {
        cout<<num<<endl;
    }
    else{
        cout<<"number is not satisfying the condition"<<endl;
    }
    return 0;
}
