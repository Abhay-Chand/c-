#include<stdio.h>
int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age >= 18){
        printf("adult. \n");
        scanf("%d",&age);
    }
    else if (age >13 && age <= 18)
    {
        printf("teenager \n");
     
    }
    else {
        printf("not valid");
    }
    printf("thank you for asking");
    return 0;
    
}