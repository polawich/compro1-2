#include<stdio.h>
/*int main(){
    char fname1[50], sname1[50], person2[50], person3[50];
    scanf("%s\n %s\n",&fname1,&sname1);
    scanf("%[^\n] %[^\n]",&person2,&person3);
    printf("Person1: %s %s\n",fname1,sname1);
    printf("Person2: %s\n",person2);
    printf("Person3: %s\n",person3);
    return 0;
}  */

int main(){
    char fname1[50];
    char sname1[50]; 
    char person2[50]; 
    char person3[50]; 
    scanf("%s\n",&fname1);
    scanf("%s\n",&sname1);
    scanf("%[^\n] %[^\n]",&person2,&person3);
    printf("Person1: %s %s\n",fname1,sname1);
    printf("Person2: %s\n",person2);
    printf("Person3: %s\n",person3);
    return 0;
}