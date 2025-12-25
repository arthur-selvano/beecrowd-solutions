#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, d, pontoUm, pontoDois, distancia;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    pontoUm = (a * a) - (2 * a * c) + (c *c);
    pontoDois = (b * b) - (2 * b * d) + (d * d);
    distancia = pontoUm + pontoDois;

    printf("%.4f\n", sqrt(distancia));
    
}