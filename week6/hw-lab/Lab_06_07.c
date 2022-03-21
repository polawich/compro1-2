#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char txtup[26] = {"QPYXBAIWGZVFUTHSOJLKDECNMR"};
    char txtdown[26] = {"qpyxbaiwgzvfuthsojlkdecnmr"};
    char ans[200];
    scanf("%[^\n]",ans);
    for (int i = 0; i < strlen(ans); i++) {
       for(int j=0; j <26; j++){
        if (isspace(ans[i])) {printf(" ");break;}
 
        if (ans[i] == txtup[j]) {
            if (j>=21) {
                j-=21;
                printf("%c",txtup[j]);break;}
            printf("%c",txtup[j+5]);break;}
 
        if (ans[i] == txtdown[j]) {
            if (j>=21) {
               j-=21;
               printf("%c",txtdown[j]);break;}
            printf("%c",txtdown[j+5]);break;}
 
       }
    }
    return 0;
}