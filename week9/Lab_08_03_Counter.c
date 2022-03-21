#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char word[1],text[150];
    int value=0;
    scanf("%c\n%[^\n]",&word,&text);
    for (int i = 0; i < strlen(text); i++)
    {
        if (tolower(word[0]) == tolower(text[i]))
        {
            value++;
        }
    }
    printf("%d",value);
    return 0;
}