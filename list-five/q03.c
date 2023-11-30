#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 0
#define MAX 100

void armazena(int *valor1, int *valor2);

int main(int argc, char *argv[]){
    // Gerar Valores
    srand(time(NULL));
    int TAM = atoi(argv[1]);
    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        *(vetor + i) = MIN + rand() % MAX;
        printf("[%i] %i\n", (vetor + i), *(vetor + i));
    }

    int *menor = &vetor;
    int *maior = &vetor;
    // Verificar menor valor
    for (int i = 0; i < TAM; i++)
    {
        if ((*(vetor + i)) < *menor){
            menor = (vetor + i);
        }
        else if ((*(vetor + i)) > *maior){
            maior = (vetor + i);
        }
    }
    // Saída de Dados
    printf("\n");
    armazena(menor,maior);

    return 0;
}

void armazena(int *valor1, int *valor2){
    int *vetorValores = *valor1;
    *(vetorValores+1) = *valor2;
    printf("Menor: %i\nMaior: %i\n",*vetorValores, *vetorValores+1);

}