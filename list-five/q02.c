#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 0
#define MAX 100

int main(int argc, char *argv[])
{
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
    //Verificar menor valor
    for (int i = 0; i < TAM; i++){
        if ((*(vetor + i)) < *menor){
            menor = (vetor + i);
        }
    }
    //Saída de Dados
    printf("\n");
    printf("Endereco do menor numero: %i\n", menor);

    return 0;
}
