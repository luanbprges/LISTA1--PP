#include <stdio.h>

int main(void){
    int j = 0 ;
    int i = 1 ;
    int n, fib ;
    scanf("%d", &n);

    for(int k = 0 ; n > 0  ; j = i , i = k, n--){
        fib = k; 
        k = j + i ;         
    }

    printf("%d", fib);

    return 0;
}