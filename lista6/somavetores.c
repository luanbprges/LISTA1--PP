#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool soma(int * v1, int N1, int * v2, int N2, int * resultado);
int somador(int * v1, int n, int * v2, int * resultado);
int organiza(int * v1, int n, int * v2);

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int *vetor1, *vetor2, *resultado;
    vetor1 = (int*) malloc(n*sizeof(int));
    vetor2 = (int*) malloc(m*sizeof(int));

    return 0;
}

bool soma(int * v1, int n, int * v2, int m, int * resultado) {
    if (n != m) {
        printf("Nao se pode somar dois vetores com tamanhos distintos");
        return false;
    }

    if (n == m) {
        resultado = (int*) malloc(n*sizeof(int));
        organiza(v1, n, v2);
        somador(v1, n, v2, resultado);
        
        free(v1);
        free(v2);
        free(resultado);
        return true;
    }
    
    
}


int organiza(int * v1, int n, int * v2) {
    int inicio = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0) v1[i] = inicio;
        
        else {
            inicio += 2;
            v1[i] = inicio;     
        } 
    }

    for (int i = 0; i < n; i++) {
        v2[i] = (i * 4);
    }
    
    return 0;
}


int somador(int * v1, int n, int * v2, int * resultado) {
    for (int i = 0; i < n; i++) {
        resultado[i] = v1[i] + v2[i];
        printf("%d, ", resultado[i]);
    }
    
    return 0;
}

