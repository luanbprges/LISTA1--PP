/*
* Arquivo: maxHappyPrime.c
* Data de criação: 27/nov/2022
* Autor: Luan Cardoso
*/

#include <stdio.h>

int soma(int n);
int happy(int n);
int primo(int n);

int main(void){
    int n;
    scanf("%d", &n);

    for(int i = n; i <= n; i--){
        if(i == 0){
            return printf("0***");
        }

        if (happy(i) & primo(i)){
            return printf("%d",i);
        }
        
    }  
}

int primo(int n){
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                return 0;
            }
        }
        if (n == 1){
            return 0;
        }
        return 1;
}

int happy(int n){
    int x = soma(n);
    
    if(x == 1){
        return 1;
    }
    
    if(x == 4){
        return 0;
    }        

    else{
        return happy(x);
    }
}

int soma(int n){
    int y, total = 0;
    for (int x = n; x >= 1; x = x/10){
        y = x % 10;
        total += y * y;
    }
    return total;
}
