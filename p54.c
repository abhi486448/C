#include<stdio.h>

void chek(char arr[],char ch);

int main(){
    char arr[]="helloworld";
    char ch;
    printf("Enter charecter : ");
    scanf("%c",&ch);

    chek(arr,ch);
    return 0;
}
void chek(char arr[],char ch){

    for(int i=0;arr[i] != '\0';i++){
        if(arr[i] == ch){
            printf("Yes it is present");
            return;
        }
    }
    printf("No it is not present !");
}