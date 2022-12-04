/*
* Arquivo: produtorio.c
* Data de criação: 27/nov/2022
* Autor: Luan Cardoso
*/

#include <stdio.h>

int main(void){
    int n;
    float produto = 1;
    scanf("%d", &n);
    float lista[n];

    for(int i = 0; i < n; i++){
        float x;
        scanf("%f", &x);
        lista[i] = x;
        produto = produto * x;

    }

    for(int i = 0; i < (n - 1) ; i++){
        printf("%g * ", lista[i]);
    }

    printf("%g = %g",lista[n - 1], produto);

    return 0;
}