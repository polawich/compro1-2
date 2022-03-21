#include <stdio.h>

int main() {
    double mat[3][3];
    int i,j;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%lf", &mat[i][j]);}
    }
    if ((mat[0][0] == mat[1][1]) && (mat[0][0] == mat[2][2])){
        if (((mat[0][1] == mat[0][2]) && (mat[1][0] == mat[1][2]) && (mat[2][0] == mat[2][1])) && (mat[0][1] == 0)){
            printf("This is a scalar matrix\n");
        }
        else printf("This is not a scalar matrix\n");
    }
    else printf("This is not a scalar matrix\n");
    return 0;
}