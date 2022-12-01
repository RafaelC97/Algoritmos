#include <stdio.h>

int main() {

    int tamanhoMatriz = 3;

    int matrizOriginal[tamanhoMatriz][tamanhoMatriz];
    int matrizMultiplicada[tamanhoMatriz][tamanhoMatriz];

    for (int i = 0; i < tamanhoMatriz; i++) {
        for (int j = 0; j < tamanhoMatriz; j++) {
            printf("Digite o numero na posicao [%d][%d]: ", i, j);
            scanf("%d", &matrizOriginal[i][j]);
        }
    }

    for (int i = 0; i < tamanhoMatriz; i++) {
        for (int j = 0; j < tamanhoMatriz; j++) {
            matrizMultiplicada[i][j] = matrizOriginal[i][j] * 2;
        }
    }

    for (int i = 0; i < tamanhoMatriz; i++){
        for(int j = 0; j < tamanhoMatriz; j++) {
            printf("[%d]", matrizMultiplicada[i][j]);
        }
        printf("\n");
    }
}


    //Crie um programa que receba números inteiros do usuário e construa uma matriz 3x3.
     //Seu programa deve exibir a matriz multiplicada por 2 ou seja, seu programa deve,
    // ao final da execução, exibir a matriz, porém com todos os seus elementos multiplicados por 2.

   // Exemplo de entrada:
   // 7 3 0
   // 5 6 1
   // 9 1 2

   // Exemplo de saída:
   // 14 6 0
   // 10 12 2
   // 18 2 4

