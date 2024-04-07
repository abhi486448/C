#include<stdio.h>

int main(){
    int a,b;
    int *ptr1=&a;
    int *ptr2=&b;

    printf("Enter any number: ");
    scanf("%d",&a);
    printf("Enter any number: ");
    scanf("%d",&b);

    *ptr1<*ptr2?printf("Maximum number is: %d",*ptr2):printf("Maximum number is: %d",*ptr1);
    return 0;
}