#include<stdio.h>
#include<math.h>

void square();
void circle();
void rectangle();

int main(){
    int a,l,b,r;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of l: ");
    scanf("%d",&l);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of r: ");
    scanf("%d",&r);

    square(a);
    circle(r);
    rectangle(l,b);

    return 0;
}

void square(int a){
    printf("area of aquare: %f\n",pow(a,2));
}

void circle(int r){
    printf("area of circle: %f\n",3.14*r*r);
}

void rectangle(int l,int b){
    printf("area of rectangle: %d\n",l*b);
}