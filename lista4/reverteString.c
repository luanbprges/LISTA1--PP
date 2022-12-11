#include <stdio.h>

int maiusculo(char copia[], int x);

int main(void) {
    int x, y;
    char frase[100000];
    scanf("%[^\n]", &frase);
    
    for(int i = 0; i < 100000; i++) {
        if (frase[i] == 0) {
            x = i;
            break;
        }
    }

    y = x;
    char copia[x];

    for(int i = 0; i <= x; i++, y--) {
        copia[i] = frase[y];
    }

    maiusculo(copia,x);

    return 0;
}

int maiusculo(char copia[], int x){
    for(int i = 1; i <= x; i++) {
        if(copia[i] != 32){
            copia[i] -= 32;
            printf("%c", copia[i]);
        }

        else{
            printf("%c",copia[i]);
        }
        
    }

    return 0;
}