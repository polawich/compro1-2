#include<stdio.h>
int main()
{
    int many,num;
    int value1=0,value2=0,value3=0,value4=0;
    scanf("%d",&many);
    for (int i = 0; i < many; i++)
    {
        scanf("%d",&num);
        if (num >=0 && num <= 160)
        {
            value1++;
        }
        else if (num >= 161 && num <= 170)
        {
            value2++;
        }
        else if (num >=171 && num <= 180)
        {
            value3++;
        }
        else if (num >=181 && num <= 200)
        {
            value4++;
        }
    }
    printf("%d\n",value1);
    printf("%d\n",value2);
    printf("%d\n",value3);
    printf("%d\n",value4);
    return 0;
}