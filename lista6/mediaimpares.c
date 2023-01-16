#include <stdio.h>
#include <stdlib.h>

int inicio(int x);
int numeros (int n, int x);
double media (int lista[], int n);
int penultimo (int lista[], int n);

int main(void) {
    int n, x, p, med;
    scanf("%d %d", &n, &x);
    x = inicio(x);
    numeros(n, x);

    return 0;
}

int inicio(int x) {
    if(x % 2 != 0) 
        return (x - 1);

    else return x;
}

int numeros (int n, int x) {
    int *lista;
    lista = (int*) malloc(n*sizeof(int));

    for(int i = 0; i < n; i++, x++) {
        if (x % 2 != 0) {
            lista[i] = x;

        }
        
        else {
            ++x;
            lista[i] = x;
        }
    }
    penultimo(lista,n);
    media(lista, n);
    free(lista);
    
    return 0;
}

double media (int lista[], int n) {
    double med = 0;
    for(int i = 0; i < n; i++) {
        med += lista[i];
    }

    return printf("%lg", (med / n));
}

int penultimo (int lista[], int n) {
    int p = lista[n - 2];

    return printf("%d ", p);
}