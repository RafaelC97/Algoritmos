#include <stdio.h>

int tamanho(char *palavra){
    int tamanho = 0;
    for(; palavra[tamanho] != '\0'; tamanho++){
    }
    return tamanho-1;
}

int compararPrefixo (char *palavra, char *prefixo){
    
    for (int i = 0; i <= tamanho(prefixo); i++){
        if(prefixo[i] != palavra[i]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    
    char palavra [15];
    char prefixo [15];
    
    printf("Digite a palavra: ");
    scanf("%s", palavra);
    
    printf("Digite a prefixo: ");
    scanf("%s", prefixo);
    
    int prefixoIgual = compararPrefixo(palavra, prefixo);
    
    if(prefixoIgual == 1){
        printf("O prefixo é igual\n");
    }else{
        printf("O prefixo não é igual\n");
    }
    return 0;

}