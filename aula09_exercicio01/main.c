#include <stdio.h>

    char *categoriaDeIdades(int idade){
        if(idade >= 5 && idade <= 7 ){
            return "Sua categoria eh: Infantil A";

        }else if(idade >= 8 && idade <= 10 ) {
            return "Sua categoria eh: Infantil B";

        }else if(idade >= 11 && idade <= 13 ) {
            return "Sua categoria eh: Juvenil A";

        }else if(idade >= 14 && idade <= 17 ) {
            return"Sua categoria eh: Juvenil B";

        }else{
            return "A categoria do nadador eh: Adulto";
        }
}
int main() {

    int idade;

    printf ("Digite a idade do nadador: \n");
    scanf ("%d", &idade);

    printf("%s", categoriaDeIdades(idade));

    return 0;
}
