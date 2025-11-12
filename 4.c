#include <stdio.h>
#include <stdlib.h>

int random (int N) { return rand() % N; }

int main(int argc, char** argv) {

    int card[4];

    for (int i = 0; i < 4; i++) {
        scanf("%ld", &card[i]);
    }

    int sum = 0;

    for(int i = 0; i < 4; i++) {
        printf("\n%d %d %d %d",card[i]/1000,card[i]%1000/100,card[i]%100/10,card[i]%10 );
        sum += card[i]%10+card[i]%1000/100;

        if (card[i]/1000*2>9) {
            sum += card[i]/1000*2-9;
        } else {
            sum += card[i]/1000*2;
        }

        if (card[i]%100/10*2>9) {
            sum += card[i]%100/10*2-9;
        } else {
            sum += card[i]%100/10*2;
        } 
    }

    
    if (sum%10==0) {
        printf("правильно\n");
    } else {
        printf("неправильно\n");
    }

}