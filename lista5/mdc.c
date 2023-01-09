#include <stdio.h>

int main(void) {
    int a, b, mdc, menor;
    scanf("%d %d", &a, &b);

    menor = a;
    if (a > b){
        menor = b;
    }

    for(int i = 1; i <= menor; i++){
        if((a % i == 0 && b % i == 0)){
            mdc = i; 
        }
    }

    printf("%d", mdc);

    return 0;
}
