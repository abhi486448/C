#include<stdio.h>

int main(){
    char arr[100];
    char ch;
    int i=0;

    while(ch != '\n'){
        scanf("%c",&ch);
        arr[i]=ch;
        i++;
    }
    arr[i]='\0';

    puts(arr);
}