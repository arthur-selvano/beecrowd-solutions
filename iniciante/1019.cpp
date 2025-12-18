#include <stdio.h>

int main(){

    int segundos, horas, minutos;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = segundos - horas * 3600 - minutos * 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

}