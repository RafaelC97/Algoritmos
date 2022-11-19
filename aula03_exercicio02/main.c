#include <stdio.h>
#include <math.h>

int main() {

    float pontoAx;
    float pontoBx;
    float pontoAy;
    float pontoBy;

    printf("Defina o ponto Ax: \n");
    scanf("%f", &pontoAx);

    printf("Defina o ponto Bx: \n");
    scanf("%f", &pontoBx);

    printf("Defina o ponto Ay: \n");
    scanf("%f", &pontoAy);

    printf("Defina o ponto By: \n");
    scanf("%f", &pontoBy);

    float distanciaEuclidiana;

    distanciaEuclidiana = sqrt(pow (pontoAx - pontoBx,2) + pow (pontoAy - pontoBy, 2));

    printf("O valor da distancia Euclidiana eh = %.2f", distanciaEuclidiana);

    return 0;
}
