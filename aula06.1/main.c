#include <stdio.h>

int main() {
    //while é mais usado quando a condição de repetição nçao é tão bem definida, como enquanto o nome for diferente do Rafael contine buscando na lista.
    //Laço for (mais comum de usar do que o while)

    for(int contadorExterno = 0; contadorExterno < 3; contadorExterno++){ //variavel de controle (inicio), condição se verdadeira, acrecimo da variavel
        for (int contadorInterno = 0; contadorInterno < 5; contadorInterno++){
            printf("ola\n");
        }
        printf("\n");
    }


}
