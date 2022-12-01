#include <stdio.h>

int main() {

    int tamanhoMatriz = 3;

    int matrizOriginal[tamanhoMatriz][tamanhoMatriz];

    for (int i = 0; i < tamanhoMatriz; i++) {
        for (int j = 0; j < tamanhoMatriz; j++) {
            printf("Digite o numero na posicao [%d][%d]: ", i, j);
            scanf("%d", &matrizOriginal[i][j]);
        }
    }

    int total = 0;

    for(int i = 0; i < tamanhoMatriz; i++) {
        for (int j = 0; j < tamanhoMatriz; j++) {
            if(i == j ){
                total = total + matrizOriginal[i][j];
            }
        }
    }

    printf("%d", total);
}
