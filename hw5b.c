#include<stdio.h>
#include<math.h>

void root(double a);
int main() {
    
  double a;
  printf("Enter a non-negative number: ");
  scanf("%lf", & a);
  
  root(a);
  
  return 0;
}
void root(double a){
  double ans = sqrt(a);
  printf("The square root of %.2lf: %.2lf", a, ans);
}
