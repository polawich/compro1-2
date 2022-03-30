#include<stdio.h>
int main()
{
    int value = 20;
    int *ptr = &value;
    int a;

    a = *ptr;

    printf("%d\n",a);

    return 0;
}