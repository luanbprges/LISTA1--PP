/*
* Arquivo: muSigma.c
* Data de criação: 07/dez/2022
* Autor: Luan Cardoso
*/

#include <stdio.h>
#include <math.h>

float desvpad(float elementos[], int N, float media);
int main(void){
    int N;
    scanf("%d", &N);
    float elementos[N], media = 0, desvio = 0, soma = 0;

    for(int i = 0; i < N; i++){
        float x;
        scanf("%f", &x);
        elementos[i] = x;
        soma += x;
    }

    media = soma / N;
    desvio = desvpad(elementos, N, media);

    printf("media %g, desvio %g", media, desvio);

    return 0;
}

float desvpad(float elementos[], int N, float media){
    float desvio, y = 0;
    for(int i = 0; i < N; i++){
        y += (elementos[i] - media) * (elementos[i] - media);
    }

    desvio = sqrt(y / N);
    return desvio;
}