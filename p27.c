#include<stdio.h>

void Hello();
void good();

int main(){
    Hello();
    good();

    return 0;
}

void Hello(){
    printf("Hello!\n");
}
void good(){
    printf("good bye\n");
}