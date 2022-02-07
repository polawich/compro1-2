#include<stdio.h>
#include<math.h>

int main(){
    float price,freecon,percent,ea,ea2,priceall;
    float discount1,discount2;
    scanf("%f\n%f\n%f",&price,&percent,&ea);
    //percent
    priceall = (price*ea);
    discount1 = (priceall-(priceall*percent)/100);
    //free
    freecon = floor(ea/3);
    ea2 = (ea-freecon);
    discount2 = (price*ea2);
    //Condition
    if (discount1 < discount2){
        printf("Discount %.f%%\n%.2f\n",percent,discount1);
    }
    else if (discount2 < discount1 || discount2 == discount1){
        printf("Buy 2 Get 1\n%.2f\n",discount2);
    }
    return 0;
}