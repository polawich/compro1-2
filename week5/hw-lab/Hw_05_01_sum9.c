#include<stdio.h>
#include<stdbool.h>

int main(){
    int count=0,numa;
    while (true)
    {
        scanf("%d",&numa);
        if(numa == -9){
            break;
        }
        count+=numa;
    }
    printf("%d",count);
    return 0; 
}