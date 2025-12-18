#include <stdio.h>

int main() {
    float A, B, C;
    float maior, medio, menor;

    scanf("%f %f %f", &A, &B, &C);

    if (A >= B && A >= C) {
        maior = A;
        if (B >= C) {
            medio = B;
            menor = C;
        } else {
            medio = C;
            menor = B;
        }
    }
    else if (B >= A && B >= C) {
        maior = B;

        if (A >= C) {
            medio = A;
            menor = C;
        } else {
            medio = C;
            menor = A;
        }
    }
    else {  
        maior = C;

        if (A >= B) {
            medio = A;
            menor = B;
        } else {
            medio = B;
            menor = A;
        }
    }

    printf("%f %f %f\n", menor, medio, maior);
}
