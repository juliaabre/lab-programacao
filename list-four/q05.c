#include <stdio.h>
#include <string.h>

#define TAM 50

int main(){
    char string[TAM];
    int i = 0;

    //Ponteiros
    char *ps = string;

    puts("Informe uma frase: ");
    scanf("%[^\n]",string);

    while(*(string + i) != '\0'){
        i++;
    }

    printf("Qtd = %i\n", i);

    return 0; 
    
}