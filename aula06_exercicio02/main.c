#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    for(int multiplicador; multiplicador <= 10; multiplicador++){
        printf("%d x %d = %d\n", numero, multiplicador, (numero * multiplicador));
    }

}
