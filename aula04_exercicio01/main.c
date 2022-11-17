#include <stdio.h>

int main() {

    printf("Digite uma idade: \n");
    int idade1;
    scanf("%d", &idade1); //& no scanf

    printf("Digite digite a segunda idade: \n");
    int idade2;
    scanf("%d", &idade2);

    printf("Digite a ultima idade: \n");
    int idade3;
    scanf("%d", &idade3);

    if(idade1 > idade2 && idade1 > idade3){
        printf("A maior idade eh: %d", idade1);//& não vai no printf

    }else if(idade2 > idade3){
        printf("A maior idade eh: %d", idade2);

    }else{
        printf("A maior idade eh: %d", idade3);
    }
}
