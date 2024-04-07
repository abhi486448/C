#include<stdio.h>

//cslculate perimeter of rectangle

int main(){
    int a,b;
    printf("Enter side a : ");//a is length
    scanf("%d",&a);
    printf("Enter side b : ");//b is beadth
    scanf("%d",&b);

    printf("Perimeter of rectangle is : %d", 2*(a+b));

    return 0;
}