#include<stdio.h>

int main(){
    char ch;

    printf("Enter a charecter : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z' ){
        printf("Upper case");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lowerr case");
    }
    else{
        printf("invalid entery");
    }

    return 0;
}