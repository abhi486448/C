#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter\n 1=sum\n 2=sub\n 3=mult\n 4=divi\n 5=rem\n");
    scanf("%d",&c);

    printf("Enter value of a: ");
    scanf("%d",&a);

    printf("Enter value of b: ");
    scanf("%d",&b);

    if(c==1){
        printf("Sum is : %d ",a+b);
    }else if(c==2){
        printf("Sub is : %d ",a-b);
    }else if(c==3){
        printf("multi is : %d ",a*b);
    }else if(c==4){
        printf("divid is : %d ",a/b);
    }else if(c==5){
        printf("Remainder is : %d ",a%b);
    }else{
        printf("Envalid Entery !");
    }

    return 0;
}