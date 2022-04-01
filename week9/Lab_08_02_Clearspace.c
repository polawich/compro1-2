#include<stdio.h>
 
char *remove_white_spaces(char *str)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    return str;
}
 
int main()
{
    char txt[150];
    scanf("%[^\n]",&txt);
    remove_white_spaces(txt);
    printf("%s",txt);
    return 0;
}