#include <stdio.h>


void main() {

    //CONDICIONAIS - EXECUTA ALGO SE UMA CONDIÇÃO FOR OU NÃO ATENDIDA
    //estrutura, if(condição){ faça isso }

    if(2 == (1+1)){   //se 2 for igual a 1+1 mostre verdadeiro
        printf("verdadeiro\n");

    }else if(1 == 1){ //se a primeira condição não for verdadeira verifica essa (quantidades ilimitadas de else if)
        printf("segundo cenario\n");

    }else{ //se todas as condições fosse falsas executa isso
        printf("ultimo cenario\n");
    }


}
