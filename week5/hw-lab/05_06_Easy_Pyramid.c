#include<stdio.h>

int main (){
    int numa;
    scanf("%d",&numa);
    for(int i = 0; i < numa; i++){
        for(int j = i+2; j <= numa; j++){
            printf(" ");
        }
        int sizetrian = (i + 1) * 2 - 1;
        for(int j = 0; j < sizetrian; j++){
            printf("*");
        }
        printf("\n");
        return 0;
    }
}

// #include <stdio.h>

// int main(void) {
//     int size;
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++) {
//         for (int j = i+2; j <= size; j++) {
//             printf(" ");
//         }
//         int sizetrian = (i + 1) * 2 - 1;
//         for (int j = 0; j < sizetrian; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }