#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if (num1 <= 0 || num2 <= 0)
        {
            printf("Error");
        }
    else
        for (size_t i = 1; i <= num2; i++)
        {
            printf("%dx%d=%d\n",num1,i,num1*i);
        }
        return 0;
}