#include<stdio.h>

int main(){
    int a=1;
    for(int i=0;i=10;i++){
        if(a==6){
            printf("a: %d\n",a);
        }else{
            break;
        }
        a++;
    }
    return 0;
}