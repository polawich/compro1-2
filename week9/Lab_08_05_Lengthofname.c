#include<stdio.h>
#include<string.h>

int main(){
    char texta[200],textb[200];
    int a,b;
    scanf("%[^\n]\n%[^\n]",&texta,&textb);
    a = strlen(texta);
    b = strlen(textb);
    if(a == b){
        printf("\\7\n");
    }
    if(a > b){
        printf("%s\n",texta);
    }
    if(a < b){
        printf("%s\n",textb);
    }
    return 0;
}