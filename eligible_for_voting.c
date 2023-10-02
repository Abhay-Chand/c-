#include<stdio.h>
int main(){
    int age;
    printf("enter your age :");
    scanf("%d",&age);
    if(age > 18){
        printf("adult. \n");
        printf("eligible for voting .\n");
    }
    else {
        printf("not adult. \n");
        printf("not eligible for voting. \n");
    }
    printf("thank you");
    
    return 0;

}