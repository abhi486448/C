#include<stdio.h>

int main(){
    float iteam[3];

    printf("Enter price of first item: ");
    scanf("%f",&iteam[0]);

    printf("Enter price of second item: ");
    scanf("%f",&iteam[1]);

    printf("Enter price of third item: ");
    scanf("%f",&iteam[2]);

    printf("price of items with gst first: %f, second: %f, third: %f ",iteam[0]+(iteam[0]*1.8),iteam[1]+(iteam[1]*1.8),iteam[2]+(iteam[2]*1.8));
    return 0;
}