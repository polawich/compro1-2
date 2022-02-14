#include<stdio.h>

int main(){
    int numa;
    scanf("%d",&numa);
    if (numa >= 0){
        while (numa >= 0){
        numa--;
        printf("%d ",numa+1);
        }
    } else if (numa <= 0){
        while (numa <= 0){
        numa++;
        printf("%d ",numa-1);
        }
    }
    return 0;
}