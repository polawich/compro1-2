#include<stdio.h>

int main(){
    int numa,numb,numc,cala,calb,calc;
    scanf("%d\n%d\n%d",&numa,&numb,&numc);
    cala = numb + numc;
    calb = numa + numc;
    calc = numa + numb;
    if (cala > numa && calb > numb && calc > numc){
        printf("Triangle is valid.\n");
    }
    else{
        printf("Triangle is not valid.\n");
    }
    return 0;
}