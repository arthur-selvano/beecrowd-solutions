#include <stdio.h>

int main(){

    int distancia;
    float consumo;

    scanf("%d %f", &distancia, &consumo);

    printf("%.3f km/l\n", (float)distancia / consumo);

}