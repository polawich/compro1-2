#include<stdio.h>

int main(){
    struct contax{
        char Phone[20];
        char Mobile[20];
        char Email[50];
};
    struct customer{
        int ID;
        char Name[30];
        char Surname[30];
        int Job;
        struct contax Contact;
};
struct customer customer[100];
