#include<stdio.h>

int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    
    int s = sum( a , b);
    printf("Sum is %d\n",s);
   
    return 0;
}

int sum(int a, int b){
    return a+b;
}
