#include <stdio.h>
#include <string.h>

#define TAM 50

int main(){

    char string1[TAM], string2[TAM];
    int i = 0; //variavel de controle

    //Ponteiros
    char *s1 = string1, *s2 = string2;

    puts("Informe uma frase: ");
    fgets(string1, TAM, stdin);

    while(*(s1 + i) != '\0'){

        *(s2 + i) = *(s1 + i);
        i++;
    }

    puts("String 1 = ");

    for(int k = 0; k < strlen(s1); k++){
        printf("%c",*(s1 + k));
    }
    
    puts("String 2 = ");

    for(int k = 0; k < strlen(s2); k++){
        printf("%c",*(s2 + k));
    }

    return 0;
}