#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    
    for(int i=0;i<(n/2);i++){
       int firstval=arr[i];
       int lastvalu=arr[n-i-1];
       arr[i]=lastvalu;
       arr[n-i-1]=firstval;
    }
    for(int j=0;j<6;j++){
        printf("%d\t",arr[j]);
    }
    return 0;
}