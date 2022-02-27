#include <stdio.h>
#include <math.h>
double perimeter(double x,double y);
double area(double x1,double y1);

int main(){
    double numa,numb;
    scanf("%lf\n%lf",&numa,&numb);
    printf("Perimeter: %.2f\n",perimeter(numa,numb));
    printf("Area: %.2f\n",area(numa,numb));
    return 0;
}

double perimeter(double x,double y){
    double pertotal;
    pertotal = x + y + sqrt((x * x) + (y * y));
    return pertotal;
}

double area(double x1,double y1){
    double areatotal;
    areatotal = (0.5*(x1 * y1));
    return areatotal;
}