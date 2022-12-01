/*
* Arquivo: somaPrimos.c
* Data de criação: 27/nov/2022
* Autor: Luan Cardoso
*/
#include <stdio.h>
#include <stdbool.h>

bool primo(int n){
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                return false;
            }
        }
        if (n == 1){
            return false;
        }
        return true;
    }

int main(void){
    int menor, maior;
    int soma = 0;
    scanf("%d %d", &menor, &maior);

    for(menor; menor <= maior; menor++){
        if(primo(menor)){
            soma += menor;
        }
    }

    printf("%d", soma);


    return 0;
}