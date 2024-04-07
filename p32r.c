#include<stdio.h>

float feran(float n);

int main()
{
    float n;
    printf("Enter celsius value: ");
    scanf("%f", &n);

    float f = feran(n);
    printf("value is: %f", f);

    return 0;
}
float feran(float n)
{
    float fan = (n * 1.8) + 32;
    return fan;
}