#include<stdio.h>
#include<math.h>

int main(){
    int n=0,num,newnum,newnum1,a=10,sum=0,j=1,newnum2,n1;

    printf("Enter any number : ");
    scanf("%d",&num);
    
    newnum=num;
    while(newnum!=0){
        newnum=newnum/a;
        ++n;
    }
    newnum1=num;
    while(j<=n){
        newnum2=newnum1/a;
        newnum2*=a;
        newnum2=newnum1-newnum2;
        if(newnum2==5){
            if(n==1){
            n1=5;
           }else{
            int power=pow(5,n);
            n1=power+1;
           }
        }else{
            int power=pow(newnum2,n);
            n1=power;
        }
        sum=sum+n1;
        newnum1/=a;
        j++;
    }

    if(sum==num){
        printf("%d is an Armstrong number \n",num);
    }else{
        printf("%d is not an Armstrong number !\n",num);
    }
    
    return 0;
}