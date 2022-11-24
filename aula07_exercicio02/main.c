#include <stdio.h>

int main() {

    int tamanhoVetor = 3;

    int vetorOriginal[tamanhoVetor];
    int vetorInvertido[tamanhoVetor];

    for(int contador = 0; contador < tamanhoVetor; contador++) {
        printf("Digite um numero: ");
        scanf("%d", &vetorOriginal[contador]);
    }
    for(int i = 0, j = tamanhoVetor-1; i < tamanhoVetor; i++, j--){
        vetorInvertido[j] = vetorOriginal[i];
    }
    for(int i = 0; i < tamanhoVetor; i++) {
        printf("vetor origem: %d\n", vetorOriginal[i]);
        printf("vetor invertido: %d\n", vetorInvertido[i]);
    }

}
