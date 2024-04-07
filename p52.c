#include<stdio.h>

void slice(char arr[]);
int main(){
    char arr[]="Helloworld";
    slice(arr);
    return 0;
}
void slice(char arr[]){
    char str[100];
    int i=3,j=0;
    char cr;
    while(i<=6){
        str[j]=arr[i];
        i++;
        j++;
    }
    str[j]='\0';
    puts(str);
}
