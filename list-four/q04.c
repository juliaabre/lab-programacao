#include <stdio.h>

#define TAM 10

int numero_inteiro();
float numero_float();
char numero_char();

int main(){
    numero_inteiro();
    numero_float();
    numero_char();

    return 0;
}

int numero_inteiro(){
    int vetor[TAM];

    puts("Informe 10 numeros inteiros: ");
    for(int i = 0; i < TAM; i++){ //receber valores
        scanf("%i",&vetor[i]);
    }

    for(int k = 0; k < TAM; k++){ //mostrar endereço e valores
        printf("[%p] = %i\n", &vetor[k],vetor[k]);
    }
}

float numero_float(){
    float vetor[TAM];

    puts("Informe 10 numeros flutuantes: ");
    for(int i = 0; i < TAM; i++){ //receber valores
        scanf("%f",&vetor[i]);
    }

    for(int k = 0; k < TAM; k++){ //mostrar endereço e valores
        printf("[%p] = %.1f\n", &vetor[k],vetor[k]);
    }
}

char numero_char(){
    char vetor[TAM];

    puts("Informe 10 numeros em caracter: ");
    for(int i = 0; i < TAM; i++){ //receber valores
        scanf(" %c",&vetor[i]);
    }

    for(int k = 0; k < TAM; k++){ //mostrar endereço e valores
        printf("[%p] = %c\n", &vetor[k],vetor[k]);
    }
}