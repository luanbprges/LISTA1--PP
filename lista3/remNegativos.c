/*
* Arquivo: remNegativos.c
* Data de criação: 07/dez/2022
* Autor: Luan Cardoso
*/

#include <stdio.h>

int main(void){
    int N, y = 0;
    scanf("%d", &N);
    int elementos[N];

    for(int i = 0; i < N; i++){
        int x;
        scanf("%d", &x);
        elementos[i] = x;
    }

    for(int i = 0; i < N; i++){
        if((elementos[i]) > 0){
            printf("%d, ", elementos[i]);
        }
        else{
            y += 1;
        }
        
    }

    if(y == N){
        printf("vazio");
    }

    return 0;
}