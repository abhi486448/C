#include <stdio.h>
int a[]={0};
void insertion();
void scarch();
void main(){
    void insertion();
    void search();
    void sort();
    void deletion();
    void traverse();
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
             search();
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
void scarch(){
    int s,f=0,i=0;
    printf("\nEnter element to be scarch");
    scanf("%d",&s);
    do{
        if(a[i]==s){
            f=1;
            printf("\n%delement is fountat position %d",s,i+1);
            break;
        }
        i++;
    }while(a[i]!='\0');
    if(f==0){
        printf("\nElement does not exit");
    }
}
void scarch(){
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
 printf("Enter element tobe deletion");
    scanf("%d",&t);
    for(j=0;j<i;j++){
        if(a[j]==t){
            f=1;
            printf("\n`Element tobe deletion");
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
                temp-a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
}
