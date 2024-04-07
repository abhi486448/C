#include<stdio.h>

int main(){
    int aadhar[5];
    // input
    int *ptr=&aadhar[0];
    // for(int i=0;i<5;i++){
    //     printf("%d index : ",i);
    //     scanf("%d",(ptr+i));
    // }
    // for(int i=0;i<5;i++){
    //     printf("%d intex : %d\n",i,*(ptr+i));
    // }
    for(int i=0;i<5;i++){
        printf("%d index : ",i);
        scanf("%d",&aadhar[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d intex : %d\n",i,aadhar[i]);
    }
    return 0;
}