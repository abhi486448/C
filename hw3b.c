#include<stdio.h>
// check number is natural or not
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num>=1){
        printf("natural number");
    } else {
        printf("not a natural number");
    }
    return 0;
}