#include<stdio.h>

void stortable(int table[][10],int n,int m, int num);

int main(){
   int table[2][10];
   
   stortable(table,0,10,2);
   stortable(table,1,10,3);
   
    
    return 0;
}
void stortable(int table[][10],int n,int m, int num){
    for(int i=0;i<m;i++){
        table[n][i]=num*(i+1);
        printf("%d \t",table[n][i]);
    }
    printf("\n");
}