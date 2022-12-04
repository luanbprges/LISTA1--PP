/*
* Arquivo: quaisDiv.c
* Data de criação: 27/nov/2022
* Autor: Luan Cardoso
*/

#include <stdio.h>

int main(void){
    int n, m;
    scanf("%d", &n);
    int lista[n];

    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        lista[i] = x;
    }

    scanf("%d", &m);

    for(int i = 0; i < n; i++){
        if(m % (lista[i]) == 0){
            printf("%d# ", lista[i]);
        }

        else{
            printf("%d ", lista[i]);
        }
    }

    return 0;

}
