#include <stdio.h>
#include <stdlib.h>

int random(int N) { return rand() % N; }

int main(int argc, char** argv) {

    int C[20];
    int D[20];

    for (int i = 0; i < 20; i++) {
        C[i] = random(21);
        D[i] = random(21);

    }

    for (int i = 0; i < 19; i++) {
        for (int j = 18; j >= i; j--) {
            if (C[j] > C[j + 1]) {
                int c = C[j];
                C[j] = C[j + 1];
                C[j + 1] = c;
            }
        }
    }

    for (int i = 0; i < 19; i++) {
        for (int j = 18; j >= i; j--) {
            if (D[j] > D[j + 1]) {
                int c = D[j];
                D[j] = D[j + 1];
                D[j + 1] = c;
            }
        }
    }
    for (int i = 0; i < 20; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", D[i]);
    }
    printf("\n");
    int E[40];

    int c = 0;
    int f = 0;
    int g = 0;

    while (f < 20 && g < 20) {
    
        if (C[f] <= D[g]) {
            E[c] = C[f];
            f++;
        } else {
            E[c] = D[g];
            g++;
        }
        c++;
    }
    
    if (f > g) {
        for (int i = 0; i < 20 - g; i++) {
            E[c] = D[g];
            
            c++;
            g++;
            
        }
    } else {
        for (int i = 0; i < 20 - f; i++) {
            E[c] = C[f];
            
            c++;
            f++;
            
        }
    }

    for (int i = 0; i < 40; i++) {
        printf("%d ", E[i]);
    }
    
    
}