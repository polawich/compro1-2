#include<stdio.h>
#include<math.h>

int main(){
    float numa,numb,numc,total;
    scanf("%f\n%f\n%f",&numa,&numb,&numc);
    total = (3.14159265359*pow(numb/2,2)*numc);
    printf("Volume : %.2fml\nBaht/ml : %.4f\n",total,(numa/total));
    return 0;
}