#include <stdio.h>
#include <string.h>

#define TAM 50

int main(){

    char phrase1[TAM], phrase2[TAM];
    int i, comparacao = 1; //comparação é uma variavel de controle

    puts("Informe uma frase: ");
    fgets(phrase1, TAM, stdin);
    puts("Informe uma frase: ");
    fgets(phrase2, TAM, stdin);

    //Sem a função
    for(i = 0; i < strlen(phrase1); i++) {
        if (phrase1[i] != phrase2[i]) {
            comparacao = 0;
            break;

        } else {
            continue;
        }
    }

    if (comparacao){
        printf("As palavras sao iguais.\n");
    } else {
        printf("As palavras NAO sao iguais.\n");
    }

    //Usando a função strcmp()
    if(!(strcmp(phrase1,phrase2))){
         printf("As palavras sao iguais.\n");
    } else{
        printf("As palavras NAO sao iguais.\n");
    }

    return 0;

}
