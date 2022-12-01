/*
* Arquivo: SomaDivisores
* Data de criação: 03/nov/2022
* Autor: Luan Cardoso
*/

#include <stdio.h>

int main(void){
    int n ;
    scanf("%d", &n);
    int i = 1 ;
    int soma = 0 ;

    while (i <= n){
        if (n%i == 0){
            soma += i ;
        }
        i += 1 ;
    }
    
    printf("%d", soma);

    return 0;
}