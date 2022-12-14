#include <stdio.h>

int login(){
    int senha;
    printf("Digite sua senha: ");
    scanf("%d", &senha);
    if(senha == 123){
        return 1;
    } else{
        return 0;
    }
}

int soma(int a, int b){
    return a + b;
}

int elevaAoQuadrado(numero){
    return numero * numero;
}

int main() {

    if(login()){
        printf("Login Realizado com Sucesso!\n");
    } else{
        printf("Senha Incorreta\n");
    }

    printf("Resultado:%d\n", elevaAoQuadrado(soma(1, 2)));

    return 0;
}
