#include<stdio.h>

int main(){
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int numa;
    scanf("%d",&numa);
    if (numa <= 20 && numa >= 1){
        for(size_t mindex = 0; mindex < 8; mindex++)
        {
            if (numa == M[mindex]){
                printf("%d is in M at index [%d]",numa,mindex);
            }
        }
        for(size_t nindex = 0; nindex < 7; nindex++)
        {
            if (numa == N[nindex]){
                printf("%d is in N at index [%d]",numa,nindex);
            }
        }
        else{
            printf("%d is not in neither M nor N",numa);
        }  
    }
    return 0;
} 