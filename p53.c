#include<stdio.h>

int vowel(char arr[]);
int main(){
    char arr[]="helloworld";
    printf("no. of vowels: %d ", vowel(arr));
    
}
int vowel(char arr[]){
    int n=0;
    for(int i=0;arr[i] != '\0';i++){
        if(arr[i] =='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
            n++;
        }
    }
    return n;
}