#include <stdio.h>

int main() {

    // OPERADORES ARITIMETICOS E RELACIONAIS

    //Aritimeticos
    int resultadoSoma = 2+3;
    int resultadoSub = 2-3;
    int resultadoMult = 2*3;
    float resutadoDiv = 2/3;
    int restoDivisao = 5%3;

    //Relacionais
    int comparacao1 = resultadoSoma >= resultadoSub;
    int comparacao2 = resultadoSub > resultadoMult;
    int comparacao3 = resutadoDiv == resultadoMult;
    int comparacao4 = resutadoDiv != resultadoMult;

    printf("comparacao1: %d\n", comparacao1);
    printf("comparacao2: %d\n", comparacao2);
    printf("comparacao3: %d\n", comparacao3);
    printf("comparacao4: %d\n", comparacao4);
    printf("Resto: %d\n", restoDivisao);


    return 0;
}
