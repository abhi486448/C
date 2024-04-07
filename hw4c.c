#include<stdio.h>
int main(){
    int n,n1,n3,j;

    printf("Enter first number: ");
    scanf("%d",&n);
    printf("Enter last number: ");
    scanf("%d",&n1);
    j=n;

    while(j<=n1){
       for(int i=2;i<j;i++){
           n3=n%i;
           if(n1!=0){
               printf("%d\n",n);
            
            }
        }
        j++;
    }    
    return 0;
}