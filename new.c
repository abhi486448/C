#include<stdio.h>

int main(){
    int a,b,c,i;
    a=0,b=1;
    printf("%d",a);
    printf("\n");
    printf("%d",b);

    for(i=1; i<=10; i++)
    {
        c=a+b;
        a=b;
        b=c;
        
        printf("\n");
        printf("%d",c);
    }


    return 0;
}