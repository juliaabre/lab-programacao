#include <stdio.h>
#include <string.h>

#define TAM 20
#define MAX 50

int main(){

    char string1[TAM], string2[TAM], string_temporaria[MAX];


    puts("Informe uma palavra: ");
    scanf("%s",&string1);

    puts("Informe uma palavra: ");
    scanf("%s",&string2);

    int i = 0, k = strlen(string1), m = 0;

    //Primeira String
    while(*(string1 + i) != '\0'){
        *(string_temporaria + i) = *(string1 + i);
        i++;
    }

    //Segunda String
    while(*(string2 + m) != '\0'){
        *(string_temporaria + k) = *(string2 + m);
        k++;
        m++;
    }

    for(int m = 0; m < strlen(string_temporaria); m++){
        printf("%c",*(string_temporaria + m));
    }

    return 0;
}
