#include <stdio.h>

    void converterTempo(int tempoEmSegundos){

    int horas = tempoEmSegundos / 3600;
    int minutos = (tempoEmSegundos / 60) % 60;
    int segundos = tempoEmSegundos % 60;

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
}

int main() {

    int tempoEmSegundos = 0;

    printf("Digite o tempo do video em segundos: \n");
    scanf("%d", &tempoEmSegundos);

    converterTempo(tempoEmSegundos);

    return 0;
}
