#include<stdio.h>

int main(){
    int price,freecon,percent,ea,ea2,priceall;
    float discount1,discount2;
    scanf("%d\n%d\n%d",&price,&percent,&ea);
    //percent
    priceall = (price*ea);
    discount1 = (priceall-(priceall*percent)/100);
    //free
    freecon = (ea/3);
    //printf("%d",free);
    ea2 = (ea-freecon);
    discount2 = (price*ea2);
    //Output Debug
    //printf("%.2f\n%.2f\n",discount1,discount2);
    //Condition
    if (discount1 < discount2){
        printf("Discount %d%%\n%.2f\n",percent,discount1);
    }
    else if (discount2 < discount1 || discount2 == discount1){
        printf("Buy 2 Get 1\n%.2f\n",discount2);
    }
    return 0;
}