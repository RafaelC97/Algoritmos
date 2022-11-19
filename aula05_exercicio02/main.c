#include <stdio.h>

int main() {

    int numero = 0;
    int soma = 0;
    int contador = 0;

    while(numero >= 0) {

        soma = soma + numero;
        printf("digite um valor: ");
        scanf("%d", &numero);
        contador++;
    }
    contador--;
    printf("o somatorio eh: %d\n", soma);
    printf("a media eh: %.2f\n", (float)(soma / contador));
    printf("a quantidade de valores lidos foi: %d\n", contador);


}
