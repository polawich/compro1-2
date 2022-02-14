#include<stdio.h>

int main(){
    int numm,numn;
    scanf("%d %d",&numm,&numn);
    if (numm > numn){
        for (; numm >= numn; numm--){
            printf("%d ", numm);
        }
        
    } else if (numm < numn){
        for (; numm <= numn; numm++){
            printf("%d ", numm);
        }
    }
}
    