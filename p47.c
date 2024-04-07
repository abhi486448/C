#include<stdio.h>

void name(char arr[]);
int main(){
    char firstName[]="ABHISHEK";
    char lastName[]="GUPTA";

    name(firstName);
    printf(" ");
    name(lastName);

    return 0;
 
}
void name(char arr[]){
     for(int i=0;arr[i] != '\0' ;i++){
        printf("%c",arr[i]);
    }
}
