#include <stdio.h>
#include <string.h>

#define TAM 10

int main(){
    char phrase1[TAM], phrase2[TAM], final[20];

    puts("Informe uma palavra: ");
    scanf("%s",phrase1);
    puts("Informe uma palavra: ");
    scanf("%s",phrase2);

    //sem a função
    int contador1 = strlen(phrase1), contador2 = strlen(phrase2);

    for(int i = 0; i < contador1; i++){
        final[i] = phrase1[i];
    }

    for(int j = 0; j < contador2; j++){
        final[j+contador1] = phrase2[j];
    }

    puts("Sem funcao:");

    for(int k = 0; k < contador1 + contador2; k++){
        printf("%c", final[k]);
    }

    //com a função

    printf("\nCom funcao:\n%s", strcat(phrase1,phrase2));
    

    return 0;

}