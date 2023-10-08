#include <stdio.h>

#define TAM 50

int main(){

    char phrase[TAM];
    int count = 0, i = 0;

    puts("Informe uma frase: ");
    fgets(phrase, TAM, stdin);

    while (phrase[i] != '\0'){
        count++;
        i++;
    }
    
    printf("Quantidade de Caracteres = %i\n", count);

    //ALGORITMO COM PONTEIROS
    
    /*char phrase[TAM];
    char *p = &phrase;
    int count = 0, i = 0;

    puts("Informe uma frase: ");
    fgets(phrase, TAM, stdin);

    while(*(p + i) != '\0'){
        count++;
        i++;
    }

    printf("Quantidade de Caracteres = %i\n", count);*/

    return 0;
    
}
