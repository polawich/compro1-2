#include<stdio.h>
#include<ctype.h>

int main(){
    char numa;
    scanf("%c",&numa);
    if (isdigit(numa)){
        printf("number\n");
    }
    else if (islower(numa)){
        printf("lowercase\n");
    }
    else if (isupper(numa)){
        printf("uppercase\n");
    }
    else{
        printf("error\n");
    }
    return 0;
}