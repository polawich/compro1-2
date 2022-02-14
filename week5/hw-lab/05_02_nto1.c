#include<stdio.h>
 
int main(){
    int i;
    scanf("%d",&i);
    do{
        i--;
        printf("%d ",i+1);
    } while (i>0);
    return 0;
}