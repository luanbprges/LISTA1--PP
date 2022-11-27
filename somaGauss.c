/*
* Arquivo: Soma de Gauss
* Data de criação: 03/nov/2022
* Autor: Luan Cardoso
*/

#include <stdio.h>

int main(){
    int n;
    int soma = 0;
    scanf("%d", &n);


    while(n > 0){
        soma += n;
        n -= 1;
    };


    printf ("%d \n", soma);

    return 0;
}