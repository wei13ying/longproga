#include <stdio.h>
#include <stdlib.h>

int random (int N) { return rand()%N; }

int main(int argc, char** argv) {

    int G[20];
    int a = -10;
    int b = 10;

    for (int i = 0; i < 20; i++) {
        G[i] = random(b - a + 1) + a;
    }
    
    printf("весь массив\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", G[i]);
    }

    printf("\n");
    printf("положительные числа\n");
    for (int i = 0; i < 20; i++) {
        if (G[i] >= 0) {
            printf("%d ", G[i]);
        }
    }

    printf("\n");
    printf("отрицательные числа\n");
    for (int i = 0; i < 20; i++) {
        if (G[i] < 0) {
            printf("%d ", G[i]);
        }
    }    
}