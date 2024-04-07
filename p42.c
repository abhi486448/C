#include<stdio.h>

int main(){
    int arr[2][2];
    arr[0][0]=1;
    arr[0][1]=2;
    arr[1][0]=3;
    arr[1][1]=4;

    int n=0;

    int *ptr=&arr[0][0];
    for (int i = 0; i < 5; i++){
    
        if ((*ptr%2)!=0)
        {
            n=n+1;
        }
        ptr++;
    }
    printf("numbers of odd number: %d",n);

    return 0;
    
}