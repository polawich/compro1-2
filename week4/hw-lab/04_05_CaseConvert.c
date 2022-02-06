# include<stdio.h>

int main(){
    char numa;
    scanf("%c",&numa);
    if (numa >= 97 && numa <= 122){
        numa -= 32;
        printf("%c\n",numa);
    }
    else if (numa >= 65 && numa <= 90){
        numa += 32;
        printf("%c\n",numa);
    }
    else {
        printf("error\n");
    }
    return 0;
}