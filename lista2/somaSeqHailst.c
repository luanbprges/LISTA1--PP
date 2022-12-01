/*
* Arquivo: somaSeqHailst.c
* Data de criação: 27/nov/2022
* Autor: Luan Cardoso
*/

#include <stdio.h>

int main(void){
    int n;
    int x = 0;
    scanf("%d", &n);
    int xo = n;
    

    while(n != 1){
        if (n % 2 == 0){
            n = n/2;
        }
        
        else{
            n = (3*n) + 1;
        }
        
        x += n;
    }


    printf("%d", x + xo);


    return 0;
}