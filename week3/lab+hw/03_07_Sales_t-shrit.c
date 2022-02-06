#include<stdio.h>

int main(){
    float price,dis,qtt,total,caldis;
    scanf("%f\n%f\n%f",&price,&dis,&qtt);
    caldis = (price-(price*dis)/100);
    printf("%.2f\n",(caldis*qtt));
    return 0;
}