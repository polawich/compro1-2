#include<stdio.h>

int main(){
    double numa[3][3],numb[3][3],matrixa[3][3],matrixb[3][3]; 
    for (int i = 0;i < 3; i++){ //matrix1
        for (int j = 0;j < 3; j++){
            scanf(" %lf",&numa[i][j]);
        }
    }
    for (int i = 0;i < 3; i++){ //matrix2
        for (int j = 0;j < 3; j++){
            scanf(" %lf",&numb[i][j]);
        }
    }
    printf("A x B\n");
    for (int i = 0; i < 3; i++) {   
        for (int j = 0; j < 3; j++) {
            double sum = 0;
            for (int k = 0; k < 3; k++) {   
                sum += matrixa[i][k] * matrixb[k][j];
            }
            printf("%.2lf ", sum);
        }
    return 0;
    }
}