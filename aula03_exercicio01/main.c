#include <stdio.h>
#include <math.h>

int main() {

    float cateto1;
    float cateto2;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    float somaDosCatetos;

    somaDosCatetos = pow(cateto1, 2) + pow(cateto2, 2);

    float hipotenusa;

    hipotenusa = sqrt(somaDosCatetos);

    printf("Valor da hipotenusa eh = %.2f", hipotenusa);

    return 0;
}
