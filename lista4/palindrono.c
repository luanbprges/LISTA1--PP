#include <stdio.h>

int reverte_maiscula(char frase[]);
int compara(char maiuscula[], char invertida[], int w);

int main(void) {
    char frase[100000];
    scanf("%[^\n]", &frase);
    reverte_maiscula(frase);
    
    return 0;
}

int reverte_maiscula(char frase[]) {
    int x = 0, y = 0, z = 0, w = 0;

    for(int i = 0; i < 100000; i++) {
        if((frase[i] >= 97 && frase[i] <= 122) || (frase[i] >= 65 && frase[i] <= 90)) {
            w += 1;
        }

        else if(frase[i] == '\0') {
            x = i;
            y = x - 1;
            break;
        }
    }
    
    char invertida[w - 1], maiuscula[w - 1];
    for(int i = 0; i < x; i++, y--) {
        if((frase[y] >= 97 && frase[y] <= 122)) {
            invertida[z] = (frase[y]) - 32;
            z += 1;   
        }

        else if((frase[y] >= 65 && frase[y] <= 90)) {
            invertida[z] = frase[y];
            z += 1;   
        }
    }

    z = 0;
    for(int i = 0; i < x; i++) {
        if((frase[i] >= 97 && frase[i] <= 122)) {
            maiuscula[z] = (frase[i]) - 32;
            z += 1;  
        }

        else if((frase[i] >= 65 && frase[i] <= 90)) {
            maiuscula[z] = frase[i];
            z += 1;  
        }  
    }
    
    y = x - 1;
    compara(maiuscula, invertida, w);

    return 0;
}

int compara(char maiuscula[], char invertida[], int w) {
    for(int i = 0; i < w; i++) {
        if(maiuscula[i] != invertida[i]) {   
            printf("Palindrono: Falso\n");
            return 0;
        }
    }

    printf("Palindrono: Verdadeiro");
    return 0;
}