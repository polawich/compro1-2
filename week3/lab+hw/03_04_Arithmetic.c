#include<stdio.h>

int main(){
    double numa,numb;
    scanf("%lf,%lf",&numa,&numb);
    printf("The sum of the given numbers : %lf\n",(numa+numb));
    printf("The difference of the given numbers : %lf\n",(numa-numb));
    printf("The product of the given numbers : %lf\n",(numa*numb));
    printf("The quotient of the given numbers : %lf\n",(numa/numb));
    return 0;
}