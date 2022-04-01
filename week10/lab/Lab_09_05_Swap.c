#include<stdio.h>

void swap(double *x, double *y, double *z);

int main(){
    double x,y,z;
    scanf("%lf %lf %lf",&x,&y,&z);
    swap(&x,&y,&z);
    printf("%.2lf %.2lf %.2lf",x,y,z);
    return 0;
}

void swap(double *x, double *y, double *z){
    double t;
    t = *x;
    *x = *z;
    *z = *y;
    *y = t;
}