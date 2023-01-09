#include <stdio.h>

int centimetro(int x);

int main(void){
    int m, cm;
    scanf("%d.%d", &m, &cm);
    cm = centimetro(cm);

    printf("Altura: %dm %d", m, cm);

    return 0;
}

int centimetro(int x) {
    if(x < 10) return x*10;
    if(x > 99) return centimetro(x/10);
    return x;
}