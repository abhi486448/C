#include<stdio.h>

int main(){
    int n;
    printf("Enter value of n but >2: ");
    scanf("%d",&n);
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    printf("%d \t %d \t",arr[0],arr[1]);
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
        printf("%d \t",arr[i]);
    }
    printf("\n");
    return 0;
}