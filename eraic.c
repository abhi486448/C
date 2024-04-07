#include<stdio.h>

int main(){
    int age,year;
    printf("Enter your age: ");
    scanf("%d",&age);
    
    printf("Enter year pass: ");
    scanf("%d",&year);

    age=age+year;

    printf("your new age is: %d",age);

    return 0;
}