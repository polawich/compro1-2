#include<stdio.h>

int main(){
    float numa,numb,numc,numd,total1,total2;
    scanf("%f%f%f%f",&numa,&numb,&numc,&numd);
    total1 = numa+numb+numc+numd;
    total2 = total1/4;
    printf("Summation is %.2f\n",total1);
    printf("Average is %.3f\n",total2);
    return 0;
}