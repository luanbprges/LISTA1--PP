/*
* Arquivo: IMC
* Data de criação: 03/nov/2022
* Autor: Luan Cardoso
*/

#include <stdio.h>

int main(){
    int p;
    float h;
    scanf("%d %f", &p, &h);
    float IMC = p/(h*h);

    if(IMC < 16){
        printf("%f (Perigo de Vida)\n", IMC);
    }
    if(IMC >= 16 && IMC < 17 ){
        printf("%f (Muito Abaixo do Peso)\n", IMC);
    }
    if(IMC >= 17 && IMC < 18.5){
        printf("%f (Abaixo do Peso)\n", IMC);
    }
    if(IMC >= 18.5 && IMC < 25){
        printf("%f (Peso Normal)\n", IMC);
    }
    if(IMC >= 25 && IMC < 30){
        printf("%f (Acima do Peso)\n", IMC);
    }
    if(IMC >= 30 && IMC < 35){
        printf("%f (Obesidade Grau I)\n", IMC);
    }
    if(IMC >= 35 && IMC < 40){
        printf("%f (Obesidade Grau II)\n", IMC);
    }
    if(IMC >= 40){
        printf("%f (Obesidade Grau III)\n", IMC);
    }

    return 0;
}