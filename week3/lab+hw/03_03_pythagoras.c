#include<stdio.h>
#include<math.h>

int main(){
    float numa,numb,total;
    scanf("%f%f",&numa,&numb);
    total = sqrt(pow(numa,2)+pow(numb,2));
    printf("%.2f\n",total);
    return 0;
}
