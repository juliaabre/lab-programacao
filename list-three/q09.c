#include <stdio.h>

#define TAM 9
int main(){
    int vetor[TAM];

    for (int i = 0; i < TAM; i++){
        printf("Informe o valor da posicao %i: ",i);
        scanf("%i",&vetor[i]);
    }
    
    printf("Os elementos da diagnoal principal são: %i, %i e %i\n",vetor[0],vetor[4],vetor[8]);

    return 0;
}