#include <stdio.h>

//tipo de retorno / nome da função / parametros da função <- corpo de uma função

int tamanho(char *palavra){
    int tamanho = 0;
    for(; palavra[tamanho] != '\0'; tamanho++){ // '\0' é o simbolo que significa o ultimo caractere, usado pra saber o tamanho de uma palavra
    }
    return tamanho;
}

int comparaPalavras (char *palavra1, char *palavra2){ //char * significa que é uma sequencia de caracteres, e int * sequencia de inteiros
    
    int tamanhoPalavra1 = tamanho(palavra1);
    int tamanhoPalavra2 = tamanho(palavra2);
    
    int tamanhoMaiorPalavra = 0;
    
    if(tamanhoPalavra1 > tamanhoPalavra2){
        tamanhoMaiorPalavra = tamanhoPalavra1;
    }else{
        tamanhoMaiorPalavra = tamanhoPalavra2;
    }
    
    for(int i = 0; i < tamanhoMaiorPalavra; i++){
        if(palavra1[i] != palavra2[i]){
            return 0;
        }else if(palavra1[i] == '\0' && palavra2[i] != '\0'){
            return 0;
        }else if(palavra2[i] == '\0' && palavra1[i] != '\0'){
            return 0;
        }
    }
    return 1;
}

int main()
{
    char nome1[15];
    char nome2[15];
    
    printf("digiteo primeiro nome: ");
    scanf("%s", nome1);
    
    printf("digiteo segundo nome: ");
    scanf("%s", nome2);
    
    int saoIguais = comparaPalavras(nome1, nome2);
    
    if(saoIguais == 1){
        printf("São a mesma palavra\n");
    }else{
        printf("Não são a mesma palavras\n");
    }

    return 0;
}