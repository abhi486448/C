#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("Test.txt","r");
    char ch;
    ch=fgetc(fptr);
    while(ch != EOF){
        printf("ch = %c\n",ch);
        ch=fgetc(fptr);
    }
    printf("\n");

    return 0;
}