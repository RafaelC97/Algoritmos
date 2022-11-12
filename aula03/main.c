#include <stdio.h>
#include <math.h>

int main() {
    //raiz quadrada

    float resultadoRaiz;
    printf("Digite um numero inteiro: ");
    scanf("%f", &resultadoRaiz);

    resultadoRaiz = sqrt(resultadoRaiz);

    printf("o resultado da raiz eh: %.0f\n", resultadoRaiz);

    //potenciação

    float resultadoPotencia;
    printf("Digite outro numero inteiro: ");
    scanf("%f", &resultadoPotencia);
    printf("Digite o expoente: ");
    float expoente;
    scanf("%f", &expoente);

    resultadoPotencia = pow(resultadoPotencia, expoente);
    printf("o resultado da potencia eh: %.1f\n",resultadoPotencia);

    return 0;
}
