#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age<12){
        cout<<"Child"<<endl;

    }
    else if(age<18){
        cout<<"teenager"<<endl;

    }
    else if(age>60){
        cout<<"senior citizen"<<endl;
    }
    else{
        cout<<"adult"<<endl;
    }
    return 0;
}