#include <stdio.h>

int main() {

    //Laço de repetção Do While - primeiro faz algo e depois valida a condição para repetir ela,
    // não precisa da condição para rodar na primeira vez. Ex:

    int contadorLogin = 0;
    int senha;

    printf("Digite o nome de usuario: ");
    scanf("%d", &senha);

    do{
        if(senha == 123){
            printf("Logado!");
            break;
        }else{
            printf("Senha incorreta! Digite a senha novamente: ");
            scanf("%d", &senha);
        }
        contadorLogin++;

    }while(contadorLogin < 3);


}
