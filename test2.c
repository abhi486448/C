#include<stdio.h>

int main(){
    int a;

    printf("Enter any number : ");
    scanf("%d",&a);

    int num = a%2; 
    if(num==0){
        printf("number is even");
    }else{
        printf("number is odd");
    }
    return 0;
}