#include<stdio.h>
#include<string.h>

typedef struct peoplesdetale{
    int house;
    char block[100];
    char city[100];
    char state[100];
} pd;
int main(){
    pd s1;
    s1.house=450;
    strcpy(s1.block,"Bajnamath");
    strcpy(s1.city,"Jabalpur");
    strcpy(s1.state,"MadhyaPradesh");

    pd s2;
    s2.house=500;
    strcpy(s2.block,"GeetaBhawan");
    strcpy(s2.city,"Indor");
    strcpy(s2.state,"MadhyaPradesh");

    pd s3;
    s3.house=550;
    strcpy(s3.block,"Palasiya");
    strcpy(s3.city,"Indor");
    strcpy(s3.state,"MadhyaPradesh");

    pd s4;
    s4.house=600;
    strcpy(s4.block,"Bijabyashi");
    strcpy(s4.city,"Jababua");
    strcpy(s4.state,"MadhyaPradesh");

    pd s5;
    s5.house=650;
    strcpy(s5.block,"Tripuri");
    strcpy(s5.city,"Bombe");
    strcpy(s5.state,"MadhyaPradesh");

    printf("Hous no. of 1:%d\n",s1.house);
    printf("Bloce of 1: %s\n",s1.block);
    printf("City of 1: %s\n",s1.city);
    printf("State of 1: %s\n",s1.state);

    printf("Hous no. of 2:%d\n",s2.house);
    printf("Bloce of 2: %s\n",s2.block);
    printf("City of 2: %s\n",s2.city);
    printf("State of 2: %s\n",s2.state);

    printf("Hous no. of 3:%d\n",s3.house);
    printf("Bloce of 3: %s\n",s3.block);
    printf("City of 3: %s\n",s3.city);
    printf("State of 3: %s\n",s3.state);

    printf("Hous no. of 4:%d\n",s4.house);
    printf("Bloce of 4: %s\n",s4.block);
    printf("City of 4: %s\n",s4.city);
    printf("State of 4: %s\n",s4.state);

    printf("Hous no. of 5:%d\n",s5.house);
    printf("Bloce of 5: %s\n",s5.block);
    printf("City of 5: %s\n",s5.city);
    printf("State of 5: %s\n",s5.state);
    return 0;
}