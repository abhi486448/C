#include<stdio.h>

void doWork(int x,int y,int *sum,int *product,int *average);
int main(){
    int a=3,b=5;
    int sum,product,average;
    doWork(a,b,&sum,&product,&average);
    printf("sum= %d, product=%d, average=%d\n",sum,product,average);
    return 0;

}
void doWork(int x,int y,int *sum,int *product,int *average){
    *sum=x+y;
    *product=x*y;
    *average=(x+y)/2;
}