#include<stdio.h>
int main(){
    char inputn[30], inputl[30];
    int inputnum[8], dd, mm, yy;
    float inputg;
    scanf("%s %s",&inputn,&inputl);
    scanf("%s",&inputnum);
    scanf("%d/%d/%d",&dd,&mm,&yy);
    scanf("%f",&inputg);
    printf("Fullname: %s %s\n",inputn,inputl);
    printf("ID: %s\n",inputnum);
    printf("DOB: %.02d-%.02d-%.02d\n",dd,mm,yy);
    printf("GPA: %.2f",inputg);
    return 0;
}