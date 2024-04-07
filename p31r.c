#include<stdio.h>

int fect(int n);

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    int fa=fect(n);

    printf("Fectorial of %d is : %d",n,fa);

}
int fect(int n){
    if(n==1){
        return 1;
    }
    int num=fect(n-1);
    int f=num*n;
    return f;
}