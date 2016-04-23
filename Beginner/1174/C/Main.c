#include <stdio.h>
#include <stdlib.h>

int main() {

int i,j;
float x;
float *n = malloc (sizeof(float) * 100);

for (i=0; i < 100; i++){

    scanf("%f", &x);

    *(n+i) = x;

    if (x<= 10){

        printf("A[%d] = %.1f\n", i, x);

    }
}
return 0;
}
