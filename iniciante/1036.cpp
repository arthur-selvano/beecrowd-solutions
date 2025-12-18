#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, delta, total, total2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b * b - 4 * a * c);

    if(a > 0 && delta > 0){
        total = (-b + sqrt(delta)) / (2 * a);
        total2 = (-b - sqrt(delta)) / (2 * a);


        printf("R1 = %.5lf\nR2 = %.5lf\n", total, total2);
    } else {
        printf("Impossivel calcular\n");
    }
}