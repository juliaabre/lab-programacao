#include <stdio.h>
#include <string.h>

#define TAM 50
int main(){
    char palavra[TAM];
    int contador = 0;

    puts("Informe uma palavra: ");
    scanf("%s",palavra);


    for(int i = strlen(palavra); i >= 0; i--){
        printf("%c",palavra[i]);
    }

    return 0;
}