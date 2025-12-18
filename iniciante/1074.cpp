#include <stdio.h>
#include <string.h>

int main(){

    long int n;
    int quantidade;
    char opcao1[50];

    scanf("%d", &quantidade);

    for(int i = 0; i < quantidade; i++){
        scanf("%ld", &n);

        if (n == 0) {
            strcpy(opcao1, "NULL");
        } else if (n % 2 == 0 && n > 0) {
            strcpy(opcao1, "EVEN POSITIVE");
        } else if (n % 2 == 0 && n < 0) {
            strcpy(opcao1, "EVEN NEGATIVE");
        } else if (n % 2 != 0 && n > 0) {
            strcpy(opcao1, "ODD POSITIVE");
        } else {
            strcpy(opcao1, "ODD NEGATIVE");
        }

        printf("%s\n", opcao1);
    }
}
