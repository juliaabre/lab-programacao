#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MIN 0
#define MAX 100

int main(){
    // Gerar Valores
    srand(time(NULL));
    
    int vetor[TAM];

    printf("Antes: ");
    for (int i = 0; i < TAM; i++){
        *(vetor + i) = MIN + rand() % MAX;
        printf("%i ", *(vetor + i));
    }

    int menor = vetor[0];
    int maior = vetor[0];
    // Verificar menor e maior valor
    for (int i = 0; i < TAM; i++){
        if ((*(vetor + i)) < menor){
            menor = *(vetor + i);
        } else if ((*(vetor + i)) > maior) {
            maior = *(vetor + i);
        }
    }
    //Calculo
    int x[TAM];
    for(int i =0; i<TAM; i++){
        x[i] = (vetor[i] - menor)/(maior - menor);
    }
    // Saída de Dados
    printf("\n");
    printf("Depois: ");
    for (int i = 0; i < TAM; i++){
        printf("%i ", *(x + i));
    }
    return 0;
}
