#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3

int main(){

    srand(time(NULL));

    int vetor[TAM], soma = 0, produto = 1;
    float media_aritmetica, media_geometrica;

    //gerar valores
    for(int i = 0; i < TAM; i++){
        vetor[i] = rand()%20;
        printf("%i ", vetor[i]);
    }

    //media aritmética
    for(int k = 0; k < TAM; k++){
        soma += vetor[k];
        produto *= vetor[k];
    }

    media_aritmetica = (float)soma / TAM;

    printf("A media aritmetica e %.2f\n",media_aritmetica);

    //media geometrica

    media_geometrica = cbrt(produto); //raiz cubica do produto

    printf("A media geometrica e %.2f\n",media_geometrica);

    return 0;
}