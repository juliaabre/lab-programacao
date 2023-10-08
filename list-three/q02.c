#include <stdio.h>
#include <string.h>

#define TAM 50

int main(){
    char string[TAM], caracter;
    int i, returno = 0;

    puts("Digite uma frase: ");
    fgets(string, TAM, stdin);
    puts("Digite uma letra: ");
    scanf("%c", &caracter);

    //verificar se há ou não o caracter
    for(i = 0; i < strlen(string); i++){
        if(string[i] == caracter){
            returno++;
            break;
        }
    }
    
    //informar se há ou não o caracter
    if (returno){
        printf("Na frase informada contem a letra '%c'\n",caracter);
    } else {
        printf("Na frase informada NAO contem a letra '%c'\n",caracter);
    }
    
    return 0;

}
