#include<stdio.h>
#include<math.h>

int main(){
    float cm,kg,conm;
    scanf("%f\n%f",&cm,&kg);
    conm = pow(cm/100,2); 
    printf("%lf\n",(kg/conm));
    return 0;
}