#include <stdio.h>
#include <math.h>

double calhigh(double x,double y);

int main(){
    double pi = 3.141592653589793,numa,numb,degree1;
    scanf("%lf\n%lf",&numa,&numb);
    degree1 = (numa * pi) / 180;
    printf("theta (degree) : %.lf\n",numa);
    printf("u (m/s) : %.lf\n",numb);
    printf("h (m) : %.4lf",calhigh(degree1,numb));
    return 0;
}

double calhigh(double x,double y){
    double totalhigh;
    totalhigh = (((y * y) * ((sin(x) * sin(x)))) / (2 * (9.81)));
    return totalhigh;
}
