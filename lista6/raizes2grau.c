#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x (float a, float b, float c);
float delta (float a, float b, float c);
int raizes(float a, float b, float c, float * x1, float * x2);

int main(void) {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    x(a, b, c);

    return 0;
}


float x (float a, float b, float c) {
    float *x1, *x2;
    float raiz1, raiz2, d;
    d = delta(a, b, c);

    raiz1 = ((-b) + (sqrt(d)))/(2 * a);
    raiz2 = ((-b) - (sqrt(d)))/(2 * a);

    if (raiz1 <= raiz2) {
        x1 = &raiz1;
        x2 = &raiz2;
    }

    else {
        x1 = &raiz2;
        x2 = &raiz1;   
    }
    
    return raizes(a, b, c, x1, x2);
}


float delta (float a, float b, float c) {
    float d;
    d = (b * b) - (4 * a * c);

    return d;
}


int raizes(float a, float b, float c, float * x1, float * x2) {
    float d;
    d = delta(a, b, c);

    if (d < 0) {
        return printf("N. raizes: 0\n");
    }

    if (d == 0) {
        printf("N. raizes: 1\n");
        printf("x1: %g\n", *x1);
    }

    if (d > 0) {
        printf("N. raizes: 2\n");
        printf("x1: %2g, x2: %g\n", *x1, *x2);
    }

    return 0;
}