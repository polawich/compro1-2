#include<stdio.h>

int main(){
    char action1[30],action2[30];
    scanf("%s\n%s",&action1,&action2);
    if (action1 == "Rock")
    {
        if (action2 == "Scissors")
            printf("Win");
        else if (action2 == "Paper")
            printf("Lose");
        else if (action2 == "Rock")
            printf("Draw");
        else
        printf("Error");
    }
    else if (action1 == "Scissors")
    {
        if (action2 == "Scissors")
            printf("Draw");
        else if (action2 == "Paper")
            printf("Win");
        else if (action2 == "Rock")
            printf("Lose");
        else
        printf("Error");
    }
    else if (action1 == "Paper")
    {
        if (action2 == "Scissors")
            printf("Lose");
        else if (action2 == "Paper")
            printf("Draw");
        else if (action2 == "Rock")
            printf("Win");
        else
        printf("Error");
    }
    else
        printf("Error");
    
    return 0;
}