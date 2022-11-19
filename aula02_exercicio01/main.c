#include <stdio.h>

int main() {

    float PI = 3.14;
    float raio;

    printf("Digite o valor do Raio: \n");

    scanf("%f", &raio);


    float area = PI * raio * raio;

    printf("Area do ciculo = %f\n", area);

    return 0;
}
