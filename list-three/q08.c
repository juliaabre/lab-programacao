#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int tam, temporaria;

    puts("Informe o tamanho do vetor: ");
    scanf("%i",&tam);

    int vetor[tam];

    //gerar valores
    puts("Numeros sorteados: ");

    for(int i = 0; i < tam; i++){
        vetor[i] = rand()%100;
        printf("%i ", vetor[i]);
    }

    //ordenação por seleção

     for(int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            if (vetor[i] < vetor[j]){
                temporaria = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = temporaria;

            }
        }
    }

    puts("\nOrdenacao por Selecao: ");

    for (int k = 0; k <= 9; k++){ //mostrar vetor
        printf("%i ", vetor[k]);

    }

    //ordenação pelo metodo da bolha
    
    int m = 1; //variavel de controle

    while(m){
        m = 0;
        for(int i = 0; i < tam-1; i++){
            if(vetor[i] > vetor[i+1]){
                temporaria = vetor[i+1];
                vetor[i+1] = vetor[i];
                vetor[i] = temporaria;
                m = 1;
        }
        
        }
    }

    puts("\nOrdenacao pelo metodo da bolha: ");

    for (int n = 0; n < tam; n++){
        printf("%i ", vetor[n]);
    }

    return 0;
}