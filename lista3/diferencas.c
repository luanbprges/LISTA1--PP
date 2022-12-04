/*
* Arquivo: diferencas.c
* Data de criação: 07/dez/2022
* Autor: Luan Cardoso
*/

#include <stdio.h>

float minimo(int x, float vetorB[]);
float maximo(int x, float vetorB[]);

int main(void){
    int n;
    scanf("%d", &n);
    float vetorA[n], vetorB[n - 1], min, max;

    for(int i = 0; i < n; i++){
        float x;
        scanf("%f", &x);
        vetorA[i] = x;
    }

    for(int i = 0; i < (n - 1); i++){
        vetorB[i] = vetorA[i + 1] - vetorA[i];
        printf("%g, ", vetorB[i]);
    }

    printf("\n");
    min = minimo((n - 1), vetorB);
    max = maximo((n - 1), vetorB);

    printf("min: %g, max: %g", min, max);
    
    return 0;
}

float minimo(int x, float vetorB[]){
    float y = vetorB[0];
    for(int i = 0; i < x; i++){
        if(vetorB[i] < y){
            y = vetorB[i];
        } 
    }
    return y;
    
}


float maximo(int x, float vetorB[]){
    float y = vetorB[0];
    for(int i = 0; i < x; i++){
        if(vetorB[i] > y){
            y = vetorB[i];
        }
    }
    return y;
}