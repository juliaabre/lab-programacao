#include <stdio.h>

#define TAM 20
int main(){

    char string1[TAM], caracter;
    int i = 0, controle = 0;

    //Ponteiros
    char *s1 = string1, *c = &caracter;
    int *cont = &controle;

    //Entrada de Dados
    puts("Informe uma palavra ou frase: ");
    scanf("%s",&string1);

    puts("Informe um caracter: ");
    scanf(" %c",&caracter);

    //Verificar se há o caracter na string
    while(*(s1 + i) != '\0'){
        if (*(s1 + i) == *c){
            *cont = 1;
            break;
        }
        i++;
    }

    //Retorno
    if (*cont){
        printf("O caracter fornecido esta na %i posicao\n",i+1);
            
    } else {
        printf("O caracter fornecido NAO esta na string fornecida\n");
    }

    return 0;
}