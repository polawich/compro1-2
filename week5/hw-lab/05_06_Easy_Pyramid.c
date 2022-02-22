#include<stdio.h>

int main(){
    int numa;
    scanf("%d",&numa);
    for (int i = 1; i <= numa; i++){ //start
        for (int j = 1;j <= numa - i; j++){ //space
            printf(" ");
        }
        for(int k = 1; k <= (2*i)-1; k++){ //star
            printf("*");
        }
        printf("\n");
    }
    return 0;
}ิิ