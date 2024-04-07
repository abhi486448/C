#include<stdio.h>

int power(int num,int n);
int main(){
    int num,n,powers;

    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Enter power: ");
    scanf("%d",&n);

    powers=power(num,n);

    printf("%d",powers);
    return 0;
}
int power(int num,int n){
    int n1=1;
    n1=n1*num;
    n=n-1;
    if(n==0){
        return n1;
    }
    return n1*power(num,n);
}