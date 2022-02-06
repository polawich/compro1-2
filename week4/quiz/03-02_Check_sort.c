#include<stdio.h>
int main()
{
    float num1,num2,num3;
    scanf("%f %f %f",&num1,&num2,&num3);
    if (num1 < num2 && num1 < num3 && num2 < num3)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}