#include <stdio.h>

int main(){
    int numero = 1;
    int maior = 0;
    int menor = numero;

    while (numero != 0){
        printf("Informe um numero: ");
        scanf("%i",&numero);

        if(numero == 0){
            break;
        }

        if(numero > maior){
            maior = numero;
        } else if(numero < menor){
            menor = numero;
        }
    }

    printf("Maior = %i\nMenor = %i\n",maior,menor);
    
}