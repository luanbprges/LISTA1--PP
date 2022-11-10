/*
* Arquivo: aritmInt
* Data de criação: 03/nov/2022
* Autor: Luan Cardoso
*/
#include <stdio.h>

int main(){
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d + %d = %d \n", x, y, x+y);
    printf("%d - %d = %d \n", x, y, x-y);
    printf("%d * %d = %d \n", x, y, x*y);
    printf("%d / %d = %d \n", x, y, x/y);
    printf("%d %c %d = %d \n", x, 37, y, x%y);


    return 0;
}