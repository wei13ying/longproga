#include <stdio.h>
#include <stdlib.h>

int random (int N) { return rand() % N; }

int main(int argc, char** argv) {

    printf("массив 1\n");

    float m[20];

    int p = 0;
    
    for (int i = 0; i < 20; i++){

        m[i] = (float)rand()*(20) / RAND_MAX-10;

        printf("%.2f ", m[i]);

        if (m[i] > 0) p += 1;
    }

    float *m2 = malloc(p * sizeof(int));

    int y = 0;

    for (int i = 0; i < 20; i++){

        if (m[i] > 0) {

            m2[y] = m[i];
            y += 1;
        }
    }
    printf("\nмассив 2\n");
    for (int i = 0; i < p; i++){

        printf("%.2f ", m2[i]);
    }

}