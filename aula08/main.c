#include <stdio.h>

int main() {

    int numeroDeElementos = 3; //atalho para mudar o nome das variaveis junto ctrl + alt + shift + J
    int numeroDeVariaveisPorElemento = 8;

    char nomes[numeroDeElementos][numeroDeVariaveisPorElemento];

    for(int i = 0; i < numeroDeElementos; i++){
        printf("Digite o primeiro nome: ");
        scanf("%s", nomes[i]);
    }

    for (int i = 0; i < numeroDeElementos; i++){
        printf("%s", nomes[i]);
    }

}

    /*char palavra[12] = "Mateus\0"; // o \0 é para o print entender onde tem que parar de ler e não mostrar o "lixo" guardado

    printf("%s\n", palavra);

    char palavras[3][8];

    char letra = palavras[1][2]; //para ler a terceira letra [2] da segunda palavra [1]

    printf("%s\n", palavras);




}