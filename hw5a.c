#include<stdio.h>

int sum(int n);
void digit(int j);
int main(){
    int num;

    printf("Enter any number: ");
    scanf("%d",&num);
    
   digit(num);
   printf("sum of digits is %d",sum(num));

    return 0;
}
int sum(int n){
    int t=n;
    int re=t%10;
    int su=0;
    su=su+re;
    t=t/10;
    if(t<=9){
        su=su+t;
        return su;
    }else{
        return su + sum(t);
    }
}
void digit(int j){
    int num1;
    num1=j/10;
    if(num1==0){
        printf("sum of digits is %d ",j);
        return;
    }else{
        return;
    } 
}