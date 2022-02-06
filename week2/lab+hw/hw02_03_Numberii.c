#include<stdio.h>

int main(){
    char numa[6];
    scanf("%s",numa);
    printf("%1c%79s",numa[0],"");
    printf("%2c%c%77s",numa[0],numa[1],"");
    printf("%3c%c%c%75s",numa[0],numa[1],numa[2],"");
    printf("%4c%c%c%c%73s",numa[0],numa[1],numa[2],numa[3],"");
    printf("%5c%c%c%c%c%71s",numa[0],numa[1],numa[2],numa[3],numa[4],"");
    return 0;
}