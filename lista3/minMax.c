/*
* Arquivo: minMax.c
* Data de criação: 07/dez/2022
* Autor: Luan Cardoso
*/
#include <stdio.h>

int maximo(int x, int V[]);
int minimo(int x, int V[]);
int maxmin(int x, int V[], int max, int min);

int main (void){
    int x, max, min;
    scanf("%d", &x);
    int V[x];

    for(int i = 0; i< x; i++){
        int n;
        scanf("%d", &n);
        V[i] = n;
    }

    max = maximo(x, V);
    min = minimo(x, V);
    maxmin(x, V, max, min);

    return 0;
}


int minimo(int x, int V[]){
    int y = V[0];
    for(int i = 0; i < x; i++){
        if(V[i] < y){
            y = V[i];

        } 
    }
    return y;
    
}


int maximo(int x, int V[]){
    int y = V[0];
    for(int i = 0; i < x; i++){
        if(V[i] > y){
            y = V[i];
        }
    }
    return y;
    
}

int maxmin(int x, int V[], int max, int min){
    for(int i = 0; i < x; i++){
        if(V[i] == max){
            printf("%d> ", max);
        }

        else if(V[i] == min){
            printf("%d< ", min);
        }

        else{
            printf("%d ", V[i]);
        }
    }
}