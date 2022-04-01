#include<stdio.h>
#include<string.h>

int main(){
    struct student_info{
        char name[60],sname[60];
        char sex[10];
        int age;
        int idnum;
        float gpa;
    }info;
    scanf("%[^] %[^] %[^] %[^] %[^] %[^]",&info.name ,&info.sname ,&info.sex ,&info.age ,&info.idnum, &info.gpa);
    // scanf("%d",&info.age);
    // printf("%d",info.age);
    // printf("%s",info.name); debug output
    if (strcmp(info.sex,"Male") == 0){
        printf("Mr %c %s ",info.name[0] ,info.sname);
        printf("(%d) ID: %d GPA %lf\n",info.age ,info.idnum ,info.gpa);
    }
    if (strcmp(info.sex,"Female") == 0){
        printf("Miss %c %s (%d) ID: %d GPA %f\n",info.name[0] ,info.sname, info.age, info.idnum, info.gpa);
    }
    return 0;
}