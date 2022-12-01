/*
* Arquivo: dist.c
* Data de criação: 27/nov/2022
* Autor: Luan Cardoso
*/
#include <stdio.h>
#include <math.h>

int main(void){
    float xa, ya, xb, yb, dist, x, y;
    scanf("%f %f %f %f", &xa, &ya, &xb, &yb);

    x = xa - xb;
    y = ya - yb;
    dist = sqrt(pow(x , 2) + pow(y , 2));

    printf("%f", dist);

    return 0;
}