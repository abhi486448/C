#include<stdio.h>

int main(){

    int n,num;
    

    for(int i=1; ;i++){
        
        printf("Enter any number : ");
        scanf("%d",&n);
        num=n%7;
        if(num==0){
            break;
        }
    }
    return 0;
}