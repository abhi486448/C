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
    
    struct student s2;
    s2.rollno=3;
    s2.cgpa=7.8;
    strcpy(s2.name,"Vivek");
    
    struct student s3;
    s3.rollno=4;
    s3.cgpa=7.8;
    strcpy(s3.name,"Vikash");

    printf("name: %s\n",s1.name);
    printf("rollno. : %d\n",s1.rollno);
    printf("cgpa: %f\n",s1.cgpa);

    printf("name: %s\n",s2.name);
    printf("rollno. : %d\n",s2.rollno);
    printf("cgpa: %f\n",s2.cgpa);

    printf("name: %s\n",s3.name);
    printf("rollno. : %d\n",s3.rollno);
    printf("cgpa: %f\n",s3.cgpa);
    return 0;
}