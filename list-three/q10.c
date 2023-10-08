#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 9

int main(){
    
    srand(time(NULL));

    int vetor[TAM], numero, contador = 0;

    //gerar valores pseudoaleatórios
    for(int i = 0; i < TAM; i++){
        vetor[i] = rand()%10;
    }

    //mostrar matriz
    for (int linhas = 0; linhas < TAM; linhas++){
        printf("%i ", vetor[linhas]);
        if (linhas == 2 || linhas == 5){
            printf("\n");
        }
        
    }
    

    puts("\nInforme um valor: ");
    scanf("%i",&numero);

    for(int k = 0; k < TAM; k++){
        if(numero == vetor[k]){
            contador++;
        }
    }

    printf("O numero %i aparece %i vezes na matriz: ",numero, contador);

    return 0;
}