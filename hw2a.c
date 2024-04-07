#include<stdio.h>

//average of three nuber

int main(){
    int num1,num2,num3;

    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    printf("Enter num3 : ");
    scanf("%d",&num3);

    int avg = (num1+num2+num3)/3;

    printf("average of three number is : %d", avg);

    return 0;
}