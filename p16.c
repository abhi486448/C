#include<stdio.h>

int main(){
    int n,tab;

    printf("Enter any number : ");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        tab=n*i;
        printf("%d * %d = %d \n",n,i,tab);
    }
    return 0;
}