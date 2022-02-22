#include<stdio.h>

int main(){
    int numa;
    scanf("%d",&numa);
    for(int i = 0; i < numa; i++){
        for (int j = 0; j < numa; j++){
            printf((i == j) || (numa-i-1 == j) ? "-" : "#");
        }
        printf("\n");
    }
    return 0;
}