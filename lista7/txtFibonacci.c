#include <stdio.h>

void fib (unsigned long long int sequencia[], int n);
void txt(unsigned long long int sequencia[], int n);

int main(void) {
    int n;
    scanf("%d", &n);
    unsigned long long int sequencia[n];

    if (n > 94) printf("O intervalo deve ser de 0 a 94");

    else {
        fib(sequencia, n);
        txt(sequencia, n);
        printf("%llu", sequencia[n - 1]);
    }

    return 0;
}


void fib (unsigned long long int sequencia[], int n) {
    unsigned long long int j = 0 ;
    unsigned long long int i = 1 ;
    int count = 0;

    for(unsigned long long int k = 0 ; n > 0  ; j = i , i = k, n--, count++){
        k = j + i ;
        sequencia[count] = j;    
    }
}


void txt(unsigned long long int sequencia[], int n) {
    FILE*arquivo;
    arquivo = fopen("fibonacci.txt", "w");

    for (int i = 0; i < n; i++) {
        fprintf(arquivo, "%llu\n", sequencia[i]);
    }

    fclose(arquivo);

}
