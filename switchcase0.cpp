//WAP to print a day based on the day number
#include<iostream>
using namespace std;
int main(){
    int day;
    cin>>day;  //between 1 to 7
    switch(day){
        case 1:
        {
            cout<<"Monday"<<endl;
            break ;
        }
        case 2:
        {
            cout<<"Tuesday"<<endl;
            break;
        }
        case 3:
        {
            cout<<"Wednesday"<<endl;
            break;
        }
        case 4:
        {
            cout<<"Thrusday"<<endl;
            break;

        }
        case 5:
        {
            cout<<"Friday"<<endl;
            break;
        }
        case 6:
        {
            cout<<"Saturday"<<endl;
            break;
        }
        case 7:
        {
            cout<<"Sunday"<<endl;
            break;
        }
        default:
        {
            cout<<"invalid number "<<endl;
        }

        return 0;



    }
}