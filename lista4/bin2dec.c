#include <stdio.h>
#include <math.h>

int reverte(char bin[]);
int bin2dec(char bin[], int x);

int main(void) {
    char bin[100000];
    int x, y;
    scanf("%[^\n]", &bin);
    reverte(bin);

    return 0;
}

int reverte(char bin[]){
    int x, y;
    for(int i = 0; i < 100000; i++) {
        if(bin[i] == '\0') {
            x = i;
            y = x;
            break;
        }
    }
    
    char copia[x];
    for(int i = 0; i <= x; i++, y--) {
        copia[i] = bin[y];
    }
    bin2dec(copia, x);
    return 0;
}

int bin2dec(char bin[], int x) {
    long long int dec = 0;
    for(int i = 1; i <= x; i++) {
       dec +=  (bin[i] - 48) * pow(2,(i - 1));
    }

    printf("%llu", dec);

    return 0;
}