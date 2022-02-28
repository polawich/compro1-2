#include<stdio.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);

int main(){
    double numa;
    char text;
    scanf("%lf %c",&numa,&text);
    if (text == 'c' || text == 'C'){  //ขั้นตอน compare celtofah
        printf("%.2lf f",celsiusToFahrenheit(numa));
        return 0;
    }
    if (text == 'f' || text == 'F'){ //ขั้นตอน compare fahtocel
        printf("%.2lf c",fahrenheitToCelcius(numa));
        return 0;
    }
    return 0;
}

double celsiusToFahrenheit(double celcius){
    double calceltofar;
    calceltofar = (1.80 * celcius) + 32;
    return calceltofar;
}

 double fahrenheitToCelcius(double fahrenheit){
    double calfahtocal;
    calfahtocal = (fahrenheit - 32)/1.80;
    return calfahtocal;
 }