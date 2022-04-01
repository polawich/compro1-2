#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char text[1000];
    int many=0;
    scanf("%[^\n]",&text);
    for (int i = 0; i < strlen(text); i++)
    {
        if (tolower(text[i])=='a' || tolower(text[i])=='e' || tolower(text[i])=='i' || tolower(text[i])=='o' || tolower(text[i])=='u')
        {
            many++;
        }
    }
    printf("%d",many);
    return 0;
}