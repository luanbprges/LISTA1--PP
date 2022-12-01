
#include <stdio.h>
#include <math.h>

int main(){
    float ti = 0, fim = 1.75, U, K, Ua = 0, Ka = 0;

    for(ti; ti <= fim ; ti += 0.01){
        U = 0.00405 * cos(3.6*ti) * cos(3.6*ti);
        K = 0.00405 * sin(3.6*ti) * sin(3.6*ti);
    
    printf("U = %f, K = %f quando t = %f ", U, K, ti);
    printf("vU = %f , vK = %f\n", U - Ua, K - Ka);
    Ua = U;
    Ka = K;
    }



    return 0;
}