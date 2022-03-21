#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    int num;
    char msg[1000], freq[1000];
    scanf("%d", &num);
    for(int i=0; i< num; i++){
        scanf(" %c", &msg[i]);
        msg[i] = tolower(msg[i]);
        freq[i] = -1;
    }
    for(int i=0; i<num; i++){
        int count = 1;
        for(int j=i+1; j<num; j++){
            if(msg[i] == msg[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i] != 0)
        freq[i] = count;
    }
    for(int i=0; i<num; i++){
        if(freq[i] != 0)
        printf("%c: %d\n", msg[i], freq[i]);
    }
    return 0;
}