#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Test.txt","r");

    for(int i=0;i<19;i++){
        char ch;
        fscanf(fptr, "%c", &ch);
        printf(" charecter = %c\n",ch);
    }
    
    // fscanf(fptr, "%c", &ch);
    // printf(" charecter = %c\n",ch);

    // fscanf(fptr, "%c", &ch);
    // printf(" charecter = %c\n",ch);

    // fscanf(fptr, "%c", &ch);
    // printf(" charecter = %c\n",ch);
    
    // fscanf(fptr, "%c", &ch);
    // printf(" charecter = %c\n",ch);

    fclose(fptr);
    return 0;
}