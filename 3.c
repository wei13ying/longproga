#include <stdio.h>
#include <stdlib.h>

int random(int N) { return rand() % N; }

int main(int argc, char **argv)
{

    float a[20];
    for (int i = 0; i < 20; i++)
    {
        a[i] = (float)rand() * (10) / RAND_MAX;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%.2f ", a[i]);
    }

    printf("\n");
    printf("элементы массива\n");
    for (int i = 1; i < 19; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            printf("%.2f ", a[i]);
        }
    }
}