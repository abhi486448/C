#include<stdio.h>
//charecter is digit or not
int main(){
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);

    if(a>=0 && a<=9){
        printf("Guven value is digit\n");
    } else {
        printf("Given value is not a digit\n");
    }

    return 0;
}