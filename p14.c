#include<stdio.h>

int main(){
    int i,n;
    i=0;
    printf("Enter value of n : ");
    scanf("%d",&n);

    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}