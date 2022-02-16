#include<stdio.h>

int main(){
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int numa,value=0;
    while (1){
        scanf("%d",&numa);
        if (numa <= 20 && numa >= 1){
            for(int mindex = 0; mindex < 8; mindex++){
                if (numa == M[mindex]){
                    printf("%d is in M at index [%d]",numa,mindex);
                    value++;
                    return 0;
                }
            }
            for(int nindex = 0; nindex < 7; nindex++){
                if (numa == N[nindex]){
                    printf("%d is in N at index [%d]",numa,nindex);
                    value++;
                    return 0;
                }
            }
            if (value==0){
                printf("%d is not in neither M nor N",numa);
                return 0;
            }
        }
    }
    return 0;
}