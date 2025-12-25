#include <stdio.h>

int main(){

    float a, b, c, d, e, f;
    int contador;

    contador = 0;

    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    if(a > 0){
        contador++;
    } if(b > 0){
        contador++;
    } if(c > 0){
        contador++;
    } if(d > 0){
        contador++;
    } if(e > 0){
        contador++;
    } if(f > 0){
        contador++;
    }

    printf("%d valores positivos\n", contador);
    
}