#include <stdio.h>

int main(){

    float a, b, c, d, e, f, media, quantidade;

    quantidade = 0;

    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

        if(a > 0){
            quantidade++;
        } else {
            a = 0;
        }
         if(b > 0){
            quantidade++;
        } else {
            b = 0;
        } if(c > 0){
            quantidade++;
        } else {
            c = 0;
        }if(d > 0){
            quantidade++;
        } else {
            d = 0;
        } if(e > 0){
            quantidade++;
        } else {
            e = 0;
        } if(f > 0){
            quantidade++;
        } else {
            f = 0;
        }

    media = (a + b + c + d + e + f) / quantidade;

    printf("%.f valores positivos\n", quantidade);

    printf("%.1f\n", media);


}