#include<stdio.h>

void indian();
void french();

int main(){
    char in='i';
    char fre='f';
    char a;

    printf("Enter your nationlity i for indian and f for french : ");
    scanf("%c",&a);

    if(a==in){
        indian();
    }else if(a==fre){
        french();
    }else{
        printf("Wrong entery ");
    }

    return 0;
}

void indian(){
    printf("Namaste\n");
}

void french(){
    printf("Bonjour");
}