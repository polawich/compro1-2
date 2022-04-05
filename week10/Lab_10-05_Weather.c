#include<stdio.h>
#include<string.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather weath);

int main(){
    int num;
    scanf("%d",&num);
    for (int i = 0;i < num; i++){
        struct Weather weath;
        scanf("%s %d %d %c",&weath.outlook, &weath.temperature, &weath.humidity, &weath.wind);
        playing_decision(weath);
    }
    return 0;
}

void playing_decision(struct Weather weath){
    if(strcmp(weath.outlook,"overcast") == 0){
        printf("yes\n");
    }
    else if(strcmp(weath.outlook,"rain") == 0){
        if (weath.wind == 'F'){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    if(strcmp(weath.outlook,"sunny") == 0){
        if (weath.humidity > 77.5)
        {
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
    }
}