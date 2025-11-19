#include <stdio.h>
#include <stdlib.h>

int random (int N) { return rand() % N; }

int main(int argc, char** argv) {

    printf("массив\n");
    int m[15];
    for (int i = 0; i < 15; i++) {
        m[i] = random(11);
        printf("%d ", m[i]);
    }
    int m2[15];
    for (int i = 0; i < 15; i++) {
        m2[i] = -1;
    }
    int k = 0;
    m2[k] = m[0];

    for (int i = 1; i < 15; i++) {
        int count = 1;
        for (int j = 0; j < 15; j++) {
            if (m[i] == m2[j])  count += 1;
        }
        if (count == 1) {
            k += 1;
            m2[k] = m[i];
        }
    }
    printf("\nмассив2\n");
    for (int i = 0; i < 15; i++){
        if (m2[i] != (-1)) printf("%d ", m2[i]);
    }
}