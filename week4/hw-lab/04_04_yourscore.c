#include<stdio.h>

int main(){
    float grade;
    scanf("%f",&grade);
    if (grade <= 100 && grade >= 80){
        printf("A");
    }
    else if (grade <= 79.99 && grade >= 70){
        printf("B");
    }
    else if (grade <= 69.99 && grade >= 60){
        printf("C");
    }
    else if (grade <= 60 && grade >= 50){
        printf("D");
    }
    else if (grade <= 50 && grade >= 0){
        printf("F");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}