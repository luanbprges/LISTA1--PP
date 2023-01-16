#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long int sequencia(long int *a, long int n, long int a0) ;
long int max_min(long int *a, long int n);
double media(long int *a, long int n);

int main(void) {
    long int n, a0;
    long int *a;
    printf("N. de elementos no vetor: ");
    scanf("%ld", &n);

    printf("Elemento inicial: ");
    scanf("%ld", &a0);

    
    sequencia(a, n, a0);
    free(a);

    return 0;
}

long int sequencia(long int *a, long int n, long int a0) {
    double an = (double)a0;
    a = (long int*) malloc(n*sizeof(long int));
    a[0] = a0;

    for (long int i = 1; i < n; i++) {
        if ((a[i - 1]) % 2 == 0) {
            a[i] = (long int)floor(sqrt(an));
        }

        else {
            an = an*an*an;
            a[i] = (long int)floor(sqrt(an));
        }
        an = a[i];
    }

    max_min(a, n);
    media(a, n);

    return 0;
}


long int max_min(long int *a, long int n) {
    long int min = a[0];
    long int max = a[0];
    
    for (long int i = 0; i < n; i++) {
        if (a[i] < min) min = a[i];
        else if (a[i] > max) max = a[i];
    }

    printf("minimo: %ld\n", min);
    printf("maximo: %ld\n", max);

    return 0;        
}

double media(long int *a, long int n) {
    long int soma = 0;
    double med;
    for (long int i = 0; i < n; i++) {
        soma += a[i];
    }

    med = ((double)soma)/n;

    return printf("media: %lg\n", med);    
}
