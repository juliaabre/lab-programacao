#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

int main(){

    srand(time(NULL));

    float vetor[TAM], maior, menor, soma;
    int i;

    //gerar valores do tipo float
    for(i = 0; i < TAM; i++){
        vetor[i] = ((float)rand())/RAND_MAX * TAM;
        printf("%.1f ", vetor[i]);
    }

    //maior e menor
    maior= menor = vetor[0];

    for(i = 1; i < TAM; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        } else if (vetor[i] < menor){
            menor = vetor[i];
        }   
    }

    //Soma
    soma = maior + menor;

    printf("\n%.1f + %.1f = %.1f\n", maior, menor,soma);

    return 0;
}
