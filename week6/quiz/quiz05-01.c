#include<stdio.h>

int main(){
    char numa;
    scanf("%c",&numa);
    if (numa <= 122 && numa >= 97){
        for(int i = 97; i <= numa; i++){
            printf("%c ",i);
        }
    }
    else{
        printf("Error\n");
    }
    return 0;
}