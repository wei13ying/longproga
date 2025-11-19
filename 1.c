#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double a = 2.14;
    double b = -4.21;
    double c = 3.25;
    double x_start = -4.5;
    double x_end = -33.5;
    double h = 0.5;
    double y[1000];
    int n = 0;

    for (double x = x_start; x >= x_end; x -= h) {
        y[n] = a * x * x * sin(x) + b * x + c;
        n++;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i -1; j++) {
            if (y[j] < y[j+1]) {
                double temp = y[j];
                y[j] = y[j+1];
                y[j+1] = temp;
            }
        }
    }


    printf("\n");
    printf("массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", y[i]);
    }

    return 0;
}