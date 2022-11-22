#include <stdio.h>

int main() {

    for (int numero = 1; numero <= 10 ; numero++) {
        printf ("Tabuada do %d\n", numero);
        for (int multiplicador = 1; multiplicador <= 10; multiplicador++) {
            printf("%d x %d = %d\n", numero, multiplicador, (numero * multiplicador));
        }
        printf("\n");
    }
    return 0;
}
