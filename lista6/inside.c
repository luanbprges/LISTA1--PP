#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 1024

int contem(char * s1, char * s2);
void getstr(char * str, long long int nchar);

int main(void) {
    char s1[n];
    char s2[n];
    int asterisco;
    
    printf("s1: ");
    getstr(s1, n);
    printf("s2: ");
    getstr(s2, n);
    asterisco = contem(s1, s2);

    if(asterisco >= 0) {
        for(int i = 0; i < strlen(s2); i++) {
            if(i == asterisco) printf("*");

            printf("%c", s2[i]);

            if(i == asterisco + strlen(s1)-1) printf("*");
        }
        printf("\n");

    } 
    
    else {
        printf("A segunda nao contem a primeira!\n");
    }

    return 0;
}


int contem(char * s1, char * s2) {
    int i, j;
    int len1 = strlen(s1), len2 = strlen(s2);

    for(int i = 0; i < len2; i++) {
        if(s1[0] == s2[i]) {
            for(j = 1; j < len1; j++) {
                if(i+j >= len2) return -1;
                if(s1[j] != s2[i+j]) break;
            }
            if(j == len1) return i;
        }
    }
    
    return -1;
}


void getstr(char * str, long long int nchar) {
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) // precisa limpar o buffer do teclado
        while ((c = getchar()) != '\n' && c != EOF);
}
