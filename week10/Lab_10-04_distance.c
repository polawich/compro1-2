#include<stdio.h>
#include<math.h>

typedef struct{
    double x;
    double y;
}Point;

double calculateDistance(Point p1, Point p2){
        double cal;
        cal = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
        return cal;
}

int main(){
    Point point1,point2;
    scanf("%lf %lf",&point1.x,&point1.y);
    scanf("%lf %lf",&point2.x,&point2.y);
    printf("Distance between two points (x1,y1) and (x2,y2) : %.2lf\n",calculateDistance(point1,point2));
    return 0;
}