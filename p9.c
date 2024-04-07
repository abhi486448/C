#include<stdio.h>

int main(){
    int marks;

    printf("Enter marks : ");
    scanf("%d",&marks);

    if(marks>=0 && marks<=30){
        printf("Fail\n");
    }
    else if(marks>30 && marks<=100){
        printf("Pass\n");
    }else{
        printf("not valid marks");
    }
    
    return 0;
}