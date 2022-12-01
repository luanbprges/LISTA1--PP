/*
* Arquivo: impares.c
* Data de criação: 27/nov/2022
* Autor: Luan Cardoso
*/
#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b){
        printf("b deve ser maior que a");
    }

    else{for(a; a <= b; a++){
            if (a % 2 != 0){
                printf("%d ", a);
            }
        }
    }

    return 0;
}