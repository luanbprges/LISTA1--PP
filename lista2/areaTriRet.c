/*
* Arquivo: areaTriRet.c
* Data de criação: 27/nov/2022
* Autor: Luan Cardoso
*/
#include <stdio.h>

int main(void){
    float xa, ya, xb, yb, xc, yc, area;
    scanf("%f %f %f %f", &xa, &ya, &xb, &yb);
    xc = xb;
    yc = ya;

    area = ((xc - xa) * (yb - yc)) / 2;

    printf("%f", area);

    return 0;
}