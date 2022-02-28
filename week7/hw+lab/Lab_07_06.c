#include <stdio.h>
#include <math.h>

int main(){
    int numa,numb;
    scanf("%d %d",&numa,&numb);
    printf("sqrt(%d^2+%d^2)=%.2lf",numa,numb,sqrt(pow(numa,2) + pow(numb,2)));
    return 0;
}