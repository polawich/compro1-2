#include<stdio.h>

int main(){
    int numa,numb;

    scanf("%d",&numa);
    for (int i = 0; i < numa; i++){
        scanf("%s ",&numb);
    }
    printf("%s ",numb);
    return 0;
}