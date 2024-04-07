#include<stdio.h>

int main(){
    int n1,n2,n3,n4,n5,n6,num,num1,num2,num3,num4;
    
    printf("Enter 1st Numbers: ");
    scanf("%d",&n1);
    
    printf("Enter 2nd Numbers: ");
    scanf("%d",&n2);

    printf("Enter 3rd Numbers: ");
    scanf("%d",&n3);

    printf("Enter 4th Numbers: ");
    scanf("%d",&n4);

    printf("Enter 5th Numbers: ");
    scanf("%d",&n5);

    printf("Enter 6th Numbers: ");
    scanf("%d",&n6);

    if(n1<n2){
        num=n1;
    }else if(n2<n1){
        num=n2;
    }
    if(num<n3){
        num1=num;
    }else if(n3<num){
        num1=n3;
    }
    if(num1<n4){
        num2=num1;
    }else if(n4<num1){
        num2=n4;
    }
    if(num2<n5){
        num3=num2;
    }else if(n5<num2){
        num3=n5;
    }
    if(num3<n6){
        num4=num3;
    }else if(n6<num3){
        num4=n6;
    }
    
    printf("The Smallest number is %d ",num4);
    return 0;
}