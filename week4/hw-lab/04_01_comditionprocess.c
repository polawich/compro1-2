#include<stdio.h>

int main(){
    int numa,numb,total1,total2;
    scanf("%d %d",&numa,&numb);
    if (numa == numb){
        total1 = numa + numb;
        printf("%d + %d = %d\n",numa,numb,total1);
    }
    else {
        total2 = numa - numb;
        printf("%d - %d = %d\n",numa,numb,total2);
    }
    return 0;
}