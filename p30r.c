#include<stdio.h>

int sum(int n);

int main(){

    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    int s=sum(n);
    printf("sum of %d natural number is: %d",n,s);
    
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int num=sum(n-1);
    int num1=num+n;
    return num1;
}