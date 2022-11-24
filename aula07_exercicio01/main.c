#include <stdio.h>

int main() {

    int numeros[10] = {};

    for(int contador = 0; contador < 10; contador++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[contador]);
    }

    for(int i = 0; i < 10; i++){
        printf("contador: %d, valor: %d, ", i, numeros[i]);
    }

    for(int i = 9; i >= 0; i--){
        printf("contador: %d, valor: %d, ", i, numeros[i]);
    }
}
