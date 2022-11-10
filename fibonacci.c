/*
* Arquivo: fibonacci
* Data de criação: 03/nov/2022
* Autor: Luan Cardoso
*/
#include <stdio.h>

int main(){
    int j = 0 ;
    int i = 1 ;
    int n ;
    scanf("%d", &n);

    for(int k = 0 ; n > 0  ; j = i , i = k, n--){
        k = j + i ;
        printf("%d, ", j);
        
    }

    printf("...");

    return 0;
}