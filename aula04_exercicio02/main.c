#include <stdio.h>

int main() {

    printf("Digite um ano: \n");
    int anoDigitado;
    scanf("%d", &anoDigitado);

    if(anoDigitado % 4 == 0){
        printf("%d eh um ano bissexto", anoDigitado);
    }else{
        printf("%d nao eh um ano bissexto", anoDigitado);
    }

    return 0;
}
