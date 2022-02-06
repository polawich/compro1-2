#include<stdio.h>
int main(){
    int numa,day,hour,min,sec;
    scanf("%d",&numa);
    day = numa/86400;
    hour = (numa%86400)/3600;
    min = ((numa%86400)%3600)/60;
    sec = ((numa%86400)%3600)%60;
    printf("%d s = %d d %d h %d m %d s\n",numa,day,hour,min,sec);
    return 0;
}