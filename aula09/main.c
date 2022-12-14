#include <stdio.h>

//(stdin) significa que a função vai receber algo do teclado

void dizOi(char nome[]){ // void não retorna nada, é um retorno vazio
    printf("Oi, %s\n", nome);
}

int main() {

    //Procedimento tem 3 coisas: um retorno, um nome e os parametros

    char nome[100];

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    dizOi(nome);



    return 0;
}
