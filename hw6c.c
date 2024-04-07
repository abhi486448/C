#include<stdio.h>

int main(){
    char str[]="abcdefghikjlmnopqrstuvwxyz";
    char *ptr=&str[0];
    for(int i=0;*ptr!='\0';i++){
        printf("%c\n",*ptr);
        ptr++;
    }
    return 0;
}