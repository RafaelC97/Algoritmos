#include <stdio.h>

int main()

    // Operador E: &&
    // Operador Ou: ||
    // Operador Not: !

    int logico = (1 > 2) || (3 > 2);
    printf("resultado 1: %d\n", logico);

    int logico2 = (1 > 2) && (3 > 2);
    printf("resultado 1: %d\n", logico2);

    if(1 < 2) {
        printf("Verdadeiro\n");
    }
    else {
        printf("Falso\n");
    }

    return 0;
}
