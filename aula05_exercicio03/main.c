#include <stdio.h>

int main() {

    int numero;
    int numeroInicial = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while( numeroInicial < numero ){

        if( numeroInicial % 2 == 0) {
            printf("%d\n", numeroInicial);
        }
        numeroInicial = numeroInicial + 1;
    }

}
