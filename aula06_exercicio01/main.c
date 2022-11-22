#include <stdio.h>

int main() {

    int contador3 = 3;
    int contador5 = 5;

    int incremento = 3;

    for(int contador = 233;contador <= 457; contador = contador + incremento){
        if(contador > 300 && contador < 400){
            incremento = contador3;
            printf("%d\n", contador);
        }
        else{
            incremento= contador5;
            printf("%d\n", contador);
        }

    }

}
