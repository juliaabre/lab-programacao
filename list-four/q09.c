#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
int main(){
    char vetor[TAM];

    //Ponteiros
    char *v = vetor;

    srand(time(NULL));

    //Gerar valores
    puts("Antes do Ordenamento:");
    for(int i = 0; i < TAM; i++){
        *(v + i) = rand()%10;
        printf("%i ",*(v + i));
    }

    //Ordenação

    for(int m = 0; m < TAM; m++){
        for(int n = 0; n < TAM-1; n++){
            if(*(v + n) > *(v + (n+1))){
                *(v + n) = *(v + n) ^ *(v + (n+1));
                *(v + (n+1)) = *(v + n) ^ *(v + (n+1));
                *(v + n) = *(v + n) ^ *(v + (n+1));
            }
        }
    }

    //Mostrar valores
    puts("\nDepois do Ordenamento:");
    for(int k = 0; k < TAM; k++){
        printf("%i ",*(v + k));
    }

    return 0;
}