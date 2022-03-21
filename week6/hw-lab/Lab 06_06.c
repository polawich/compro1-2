#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char name[61][61], check[61];
    for(int i=0; i<20; i++){
        scanf(" %[^\n]s", &name[i]);
    }
    for(int i=0; i<20; i++){
        for(int j=0; j < strlen(name[i]); j++){
            name[i][j] = tolower(name[i][j]);
        }
    }
    for(int i=0; i<20; i++){
        for(int j=i+1; j<20; j++){
            if(strcmp((name[i]),(name[j]))>0){
                strcpy(check,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],check);
            }
        }
    }
    for(int i=0; i<20; i++){
        int check2=0;
        for(int j=0; j < strlen(name[i]); j++){
            if(j==0 && name[i][j] >= 97)
                printf("%c", (name[i][j])-32);
            else if(name[i][j] == 32){
                printf(" ");
                printf("%c", (name[i][j+1])-32);
                check2 = j+1;
            }
            else if(check2 != j)
                printf("%c", (name[i][j]));
        }
        printf("\n");
    }
    return 0;
}