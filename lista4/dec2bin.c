#include <stdio.h>

int main(void) {
    long long int dec;
    int x, y;
    int bin[100000];
    scanf("%llu", &dec);

    for (int i = 0; i < 100000; i++) {
        if(dec != 1) {
            bin[i] = dec % 2;
            dec /= 2;
        }

        else{
            bin[i] = dec;
            x = i;
            break;
        }
    }

    y = x;
    int copia[x];   

    for(int i = 0; i <= x; i++, y--) {
        copia[i] = bin[y];
        printf("%d", copia[i]);        
    }
    
    return 0;
}