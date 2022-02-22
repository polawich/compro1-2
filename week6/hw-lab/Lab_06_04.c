<<<<<<< HEAD
#include <stdio.h>  
#include <string.h>  

int main()  
{  
    char numa[100];
    scanf ("%s",&numa);    
    printf ("%s",strrev(numa));  
    return 0;  
=======
#include<stdio.h>
#include<string.h>

int main(){
    char numa[100];
    scanf("%[^\n]",numa);
    for(int j = strlen(numa)-1; j >= 0; j--) {
        printf("%c",numa[j]);
    }
    return 0;
>>>>>>> main
}