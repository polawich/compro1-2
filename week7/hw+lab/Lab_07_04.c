#include<stdio.h>
#include<string.h>

//double celsiusToFahrenheit(double celcius);
// double fahrenheitToCelcius(double fahrenheit);

int main(){
    int numa;
    char text[1];
    scanf("%d %c",&numa,&text);
    if (strcmp(text, "c")){  //ขั้นตอน compare
        printf("hi");
        return 0;
    }
    if (strcmp(text, "f")){
        printf("hi2");
        return 0;
    }
//    printf("%d %c",numa,text[0]);
    return 0;
}

// double celsiusToFahrenheit(double celcius){

// }

// double fahrenheitToCelcius(double fahrenheit){

// }