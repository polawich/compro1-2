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
    scanf("%[^] %[^] %[^] %[^] %[^] %[^]",&info.name ,&info.sname ,&info.sex);
    scanf("%d",&info.age);
    scanf("%d",&info.idnum);
    scanf("%f",&info.gpa);
    // printf("%s",info.name); debug output
    if (strcmp(info.sex,"Male") == 0){
        printf("Mr %c %s (%d) ID: %d GPA %.2lf\n",info.name[0] ,info.sname ,info.age ,info.idnum ,info.gpa);
    }
    if (strcmp(info.sex,"Female") == 0){
        printf("Miss %c %s (%d) ID: %d GPA %.2lf\n",info.name[0] ,info.sname, info.age, info.idnum, info.gpa);
    }
    return 0;
}