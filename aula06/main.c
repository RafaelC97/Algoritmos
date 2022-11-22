#include <stdio.h>

int main() {

    int contadorCiclos = 0;

    while(contadorCiclos < 3) {

        int contadorPrints = 0;
        while (contadorPrints < 5) {
            printf("ola\n");
            contadorPrints++;
        }

        printf("\n");
        contadorCiclos++;

    }
}
