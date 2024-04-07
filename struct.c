#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.rollno=2;
    s1.cgpa=7.8;
    strcpy(s1.name,"Abhishek");

    printf("name: %s\n",s1.name);
    printf("rollno. : %d\n",s1.rollno);
    printf("cgpa: %f",s1.cgpa);
    return 0;
}
