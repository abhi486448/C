#include<stdio.h>

int main(){
int n,sum;
sum=0;
printf("Enter no: ");
scanf("%d",&n);

for(int i=n; i>=1; i--){
    printf("%d\n",i);
    sum=sum+i;
}
printf("Sum :%d",sum);
return 0;
}