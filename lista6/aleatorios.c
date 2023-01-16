#include <stdio.h>
#include <stdlib.h>

int gera_aleatorio (int *aleatorio, int n);
int max_min(int *aleatorio, int n);
double media(int *aleatorio, int n);

int main(void) {
    int n;
    scanf("%d%*c", &n);
    int aleatorio[n];
    srand(n);
    gera_aleatorio(aleatorio, n);
    max_min(aleatorio, n);
    media(aleatorio, n);
    free(aleatorio);

    return 0;
}

int gera_aleatorio (int *aleatorio, int n) {
    for (int i = 0; i < n; i++) {
        aleatorio[i] = (rand() % n);
        printf("%d ", aleatorio[i]);
    }
    printf("\n");
    
    return 0;
}

int max_min(int *aleatorio, int n) {
    int min = 0;
    int max = 0;
    
    for (int i = 0; i < n; i++) {
        if (aleatorio[i] < min) min = aleatorio[i];
        else if (aleatorio[i] > max) max = aleatorio[i];
    }

    printf("minimo: %d\n", min);
    printf("maximo: %d\n", max);

    return 0;        
}

double media(int *aleatorio, int n) {
    int soma = 0;
    double med;
    for (int i = 0; i < n; i++) {
        soma += aleatorio[i];
    }

    med = ((double)soma)/n;

    return printf("media: %lg\n", med);    
}
