#include <stdio.h>

int main() {
    printf("Diga seu nome: \n"); //saida
    char nome[10];

    scanf("%s", nome); //entrada

    printf("Bem vindo, %s\n", nome);

    printf("Digite sua idade: ");

    int idade;

    scanf("%d", &idade);

    printf("você tem %d anos\n", idade);

    return 0;
}