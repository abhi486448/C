#include<stdio.h>

void temp(int x);
int main(){
    int t;
    printf("Enter todays temperatur in C:");
    scanf("%d",&t);

    temp(t);
    return 0;
}
void temp(int x){
    if(x<=25){
        printf("It`s cold today\n");
    }else if(x>25){
        printf("It`s Hot today\n");
    }else {
        printf("Wrrong entery!");
    }
}