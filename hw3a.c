#include<stdio.h>
//to determine number is Armstrong or not.
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num>=0 && num<=9){
        printf("Armstrong num");
    } else if(num>=10 && num<=99){
        int n1=num/10;
        int n2=num-(n1*10);
        n1*=n1;
        n2*=n2;
        int sum=n1+n2;
        num==sum ? printf("Armstrong num") : printf("Not Armstrong num");
    } else if(num>=100 && num<=999){
        int n1=num/100;
        int n2=(num-(n1*100))/10;
        int n3=num-((n1*100)+(n2*10));
        n1=n1*n1*n1;
        n2=n2*n2*n2;
        n3=n3*n3*n3;
        int sum = n1+n2+n3;
        num==sum ? printf("Armstrong num") : printf("Not Armstrong num");

    } else if(num>=1000 && num<=9999){
        int n1=num/1000;
        int n2=(num-(n1*1000))/100;
        int n3=(num-((n1*1000)+(n2*100)))/10;
        int n4=num-((n1*1000)+(n2*100)+(n3*10));
        n1=n1*n1*n1*n1;
        n2=n2*n2*n2*n2;
        n3=n3*n3*n3*n3;
        n4=n4*n4*n4*n4;
        int sum = n1+n2+n3+n4;
        num==sum ? printf("Armstrong num") : printf("Not Armstrong num");
        
    } else{
        printf("Wrong number");
    }

    return 0;
}