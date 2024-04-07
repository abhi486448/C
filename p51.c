#include<stdio.h>
#include<string.h>
void salt(char password[]);
int main(){
    char password[100];

    scanf("%s",password);
    salt(password);

    return 0;
}
void salt(char password[]){
    char newpassword[200];
    char salt[]="123";
    strcpy(newpassword,password);
    strcat(newpassword,salt);
    puts(newpassword);
    
}