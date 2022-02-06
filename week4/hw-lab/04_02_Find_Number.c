#include<stdio.h>

int main(){
    double numa,numb,numc;
    scanf("%lf %lf %lf",&numa,&numb,&numc);
    if (numa < numb && numa < numc){
        if (numb < numc)
            printf("%.2lf",numb);
        else 
            printf("%.2lf",numc);
    }
    else{
        if (numb < numa && numb < numc)
        {
            if (numa < numc)
                printf("%.2lf",numa);
            else
                printf("%.2lf",numc);
        }
        else {
            if (numa < numb)
                printf("%.2lf",numa);
            else
                printf("%.2lf",numb);
        }
    }
    return 0;
}