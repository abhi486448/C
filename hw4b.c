#include<stdio.h>

int main(){
    int n,n1;

    printf("Enter any number: ");
    scanf("%d",&n);

    for(int i=2;i<n;i++){
        n1=n%i;
        if(n1!=0){
            printf("%d is a prime number :)",n);
            break;
        }else{
            printf("%d is not a prime number",n);
            break;
        }
    }
    return 0;
}