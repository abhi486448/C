#include <stdio.h>
int a[]={0};
// Declare or prototype the functions before main
void insertion();
void search();
void sort();
void deletion();
void traverse();
int main(){ // Use int main() instead of void main()
    // No need to declare the functions again inside main
    int ch;
    
    do{
        printf("\n Enter 1 for insertion");
        printf("\n Enter 2 for search");
        printf("\n Enter 3 for sort");
        printf("\n Enter 4 for deletion");
        printf("\n Enter 5 for traverse");
        printf("\n Enter 0 for Exit");
        printf("\n Enter choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
             insertion();
             break;
            case 2:
             search(); // Correct the spelling
             break;
            case 3:
             sort();
             break;
            case 4:
             deletion();
             break;
            case 5:
             traverse();
             break;
            case 0:
             printf("\nExit from program");
             break;
            default:
             printf("\n Invalid choice code");
            
        }
    }while(ch!=0);
    return 0; // Return an int value from main
}
void insertion()
{
    int i,n;
    printf("\nEnter number of Element to be insertion ");
    scanf("%d",&n);
    printf("\nEnter element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    a[i]='\0';
}
void search(){ // Correct the spelling
    int s,f=0,i=0;
    printf("\nEnter element to be search");
    scanf("%d",&s);
    do{
        if(a[i]==s){ // Use == instead of = for comparison
            f=1;
            printf("\n%delement is found at position %d",s,i+1);
            break;
        }
        i++;
    }while(a[i]!='\0');
    if(f==0){
        printf("\nElement does not exit");
    }
}
void traverse(){
    int i=0;
    do{
        printf("\ntraverse at %d",a[i]);
        i++;
    }while(a[i]!='\0');
}
void deletion(){
    int i=0,j,t,f=0;
    do{
        i++;
    }while(a[i]!='\0');
 printf("Enter element to be deletion");
    scanf("%d",&t);
    for(j=0;j<i;j++){
        if(a[j]==t){
            f=1;
            printf("\nElement to be deletion");
            break;
        }
    }
    if(f==0){
        printf("\nElement to be deleted,does not exit in list");
    }
    while(j<(i-j)){
        a[j]=a[j+1];
        j++;
    }
}
void sort(){
    int i=0,j,k,temp;
    do{
        i++;
    }while(a[i]!='\0');
    for(j=1;j<i;j++){
        for(k=1;k<i-j;k++){
            if(a[k]>a[k+1]){
                temp=a[k]; // Use = instead of - for assignment
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
}
