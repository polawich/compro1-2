#include <stdio.h>
#include <ctype.h>
 
int main(void) {
    char text[300] = "", let;
    int ind[300] = {-1}, indi = 0;
    scanf("%[^\n] %c", text, &let);
    for (int i = 0; i < sizeof(text); i++) {
        if (tolower(text[i]) == tolower(let)) {
            ind[indi++] = i;
        }
    }
    if (indi != 0) {
        printf("There is/are %d \"%c\" in the above sentences.\nPosition: ", indi, let);
        for (int i = 0; i < indi; i++) {
            printf("%d", ind[i]+1);
            if (i != indi-1) printf(", ");
        }
    }
    else {
        printf("Not found.");
    }
}