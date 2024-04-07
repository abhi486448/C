#include<stdio.h>

int main(){
    char name[100];
    int i=0;
    
    fgets(name,100,stdin);
    while (name[i] != '\0')
    {
        i++;
    }
    printf("no. of chracter : %d",i-1);
   
    return 0;
}