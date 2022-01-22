#include<stdio.h>

int main(){
    //type input
    char num1,num2,num3,num4,num5;
    //input value
    scanf("%c %c %c %c %c",&num1,&num2,&num3,&num4,&num5);
    //convert
    int c_num1 = num1 + 1, c_num3 = num3 + 1, c_num5 = num5 + 1;
    //output
    printf("%c\n",c_num1);
    printf("%c\n",num2);
    printf("%c\n",c_num3);
    printf("%c\n",num4);
    printf("%c\n",c_num5);
    return 0;
}