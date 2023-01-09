#include <stdio.h>
#include <math.h>

float aproxima(int n);

int main(void){
    int n;
    scanf("%d", &n);

    if(n == 0){
        printf("4");
    }

    else if(n < 0){
        return printf("O numero deve ser maior ou igual a 0");
    }

    else printf("%f", aproxima(n));

    return 0;
}

float aproxima(int n){
    float S = 0;
    
    for(int i = 0; n >= i; i++){
        S += 4 * ((pow(-1, i)) / (2*i + 1));
    }

    return S;
}