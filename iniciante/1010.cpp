#include <stdio.h>

int main(){

    //PEÇA 1
    int codigopeca1, numeropeca1;
    float valor1;
    // PEÇA 2
    int codigopeca2, numeropeca2;
    float valor2;
    float total;

    scanf("%d %d %f", &codigopeca1, &numeropeca1, &valor1);
    scanf("%d %d %f", &codigopeca2, &numeropeca2, &valor2);

    total = numeropeca1 * valor1 + numeropeca2 * valor2;

    printf("VALOR A PAGAR: R$%.2f\n", total);

}