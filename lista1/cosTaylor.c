/*
* Arquivo: cosTaylor
* Data de criação: 03/nov/2022
* Autor: Luan Cardoso
*/
#include <stdio.h>
#include <math.h>

int fatorial(int m){
    int fat = 1;

    for(int j = 1; j <= m; j++){
        fat = fat * j;

    }
    return fat ;

}

int main(){
    int n ;
    double x , pi, v, cosx;
    pi = 3.14159265358979323846;
    scanf("%d %lf", &n, &x );
    v = x * pi ;

    for(int i = 0; n >= 0; i++ , n--){
        cosx += pow(-1 , i) * pow(v , 2*i) / fatorial(2*i);
    }

    printf("%lf", cosx);

    return 0;
}