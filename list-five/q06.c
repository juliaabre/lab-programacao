#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MIN 0
#define MAX 100
float calcula_media(int *vetor);
void calcula_mediana(int *vetor);

int main(){
    // Gerar Valores
    srand(time(NULL));

    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        *(vetor + i) = MIN + rand() % MAX;
        printf("%i ", *(vetor + i));
    }

    // Saída de Dados
    float media = calcula_media(vetor);
    calcula_mediana(vetor);

    printf("A media do vetor: %f\n", media);

    return 0;
}

float calcula_media(int *vetor){
    float media;
    int soma = 0;
    for(int i =0; i<TAM; i++){
        soma += *(vetor+i);
    }
    media = soma/TAM;
    return media;
}

void calcula_mediana(int *vetor){
    int meio = (sizeof(vetor) / 2)+1;
    int *mediana;
    if (sizeof(vetor) % 2){
        *mediana = *(vetor+meio);
        printf("A mediana é %i\n",*mediana);
    }
    else {
        *mediana = (sizeof(vetor) / 2);
        *(mediana + 1) = (sizeof(vetor) / 2) + 1;
        printf("A mediana é %i e %i\n", *mediana, *(mediana+1));
    }
    
}