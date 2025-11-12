#include <stdio.h>
#include <stdlib.h>

int random (int N) { return rand() % N; }

unsigned long f(int n){
    if (n < 0) {
        return 1;
    } else {
    int sum = 1;
    for(int i = 1; i < n+1;i++) sum*=i;
    return sum;
    }
}

int main(int argc, char** argv) {

    int n = atoi(argv[1]);
    if (n <= 0) return 1;
    float *massive = malloc(n * sizeof(int));
    long fn = f(n);

    printf("массив\n");

    for (int i=1;i<n+1;i++){
        float C = fn/(f((n-i))*f(i));
        massive[i]=(C);
        printf("%.2f ",C);
    }

}