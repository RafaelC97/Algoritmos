#include <stdio.h>
#include <

int main() {

    //while(1 == 2 ){ //significa enquanto (repetição)

    //exemplo de repetição

    int contador = 0;

    while (contador <= 10){
        printf("contador: %d\n", contador); //++contador iria aumentar antes de imprimir
        contador = contador + 1; // aqui voce pode escolher de quanto em quanto aumenta
        //contador++ ou -- como decremento (segunda opção da linha acima (operador de incremento que almenta de 1 em 1 se o ++ vier antes da variavel ele aumenta antes)
        sleep(2);

    }

}
