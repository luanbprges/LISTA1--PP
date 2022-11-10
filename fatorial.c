/*
* Arquivo: Fatorial
* Data de criação: 03/nov/2022
* Autor: Luan Cardoso
*/

#include <stdio.h>

int main(){
    int n;
    int fat = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fat = fat * i;
    }

    printf("%d! = %d", n, fat);

    return 0;
}