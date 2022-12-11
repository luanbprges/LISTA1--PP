#include <stdio.h>

int corta_string(char frase[]);
int conta_caracter(char frase[], int x);

int main(void) {
    char frase[100000];
    scanf("%[^\n]", &frase);
    corta_string(frase);
    
    return 0;
}

int corta_string(char frase[]) {
    int x;
    for(int i = 0; i < 100000; i++) {
        if(frase[i] == '\0') {
            x = i;
            break;
        }
    }
    
    char copia[x];
    for(int i = 0; i <= x; i++) {
        copia[i] = frase[i];
    }

    conta_caracter(copia, x);
    return 0;
}

int conta_caracter(char frase[], int x){
    int letras = 0, digitos = 0, outros = 0;

    for(int i = 0; i < x; i++) {
        if((frase[i] >= 48 && frase[i] <= 57)) {
            digitos += 1; 
        }

        else if((frase[i] >= 97 && frase[i] <= 122) || (frase[i] >= 65 && frase[i] <= 90)) {
            letras += 1;
        }

        else {
            outros += 1;
        }
    }

    printf("letras: %d digitos: %d outros: %d", letras, digitos, outros);
    return 0;
}

