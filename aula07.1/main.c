#include <stdio.h>

int main() {

    //Vetores : se teno 10 espaçoes e não preenxo os outros os espaçoes são guardados, mas podem ter lixo,
    //pois em C ele não zera a vareavel

    int numeros[10] = {3,7,8,0,2}; //vetor são conjuntos(fileira) de variaveis do mesmo tipo -
    //- caso coloque uma variavel de outro tipo (texto quando era pra ser inteiro) ele converte a variavel naquele
    // tipo ex: a = 91 segundo a tabela asks (ver o nome certo da tabala). uma posição do vetor é igual a uma variavel./

    //numeros[5] = 11; // colocando o valor 11 na posição 6 do vetor| obs: vetores começão da posição 0 e não 1

    for(int contador = 0; contador < 10; contador++){ //digitando cada um dos vetores
        printf("Digite um numero: ");
        scanf("%d", &numeros[contador]);
    }

    for(int contador = 0 ; contador < 10; contador++){ //imprimindo cada um dos vetores
        printf("posicao %d, valor: %d\n", contador, numeros[contador]);
    }

}
