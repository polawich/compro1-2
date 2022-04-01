#include<stdio.h>
#include<string.h>

int main(){
    struct student_info{
        char name[60],sname[60];
        char sex[10];
        int age;
        char idnum[12];
        float gpa;
    };
    struct student_info info;
    scanf ("%[^] %[^] %[^] %[^] %[^] %[^]",&info.name ,&info.sname ,&info.sex ,&info.age ,&info.idnum ,&info.gpa);
    // printf("%s",info.name); debug output
    if (strcmp(info.sex,"Male") == 0){
        printf("Mr %c %s (%d) ID: %s GPA %f\n",info.name[0] ,info.sname, info.age, info.idnum, info.gpa);
    }
    if (strcmp(info.sex,"Female") == 0){
        printf("Miss %c %s (%d) ID: %s GPA %f\n",info.name[0] ,info.sname, info.age, info.idnum, info.gpa);
    }
    return 0;
}