#include <stdio.h>

int main(){
    int numero, maior = 0, menor = numero;

    while(numero >= 0){
        printf("Informe um numero: ");
        scanf("%i",&numero);
        if(numero < 0){
            break;
        }
        if(numero > maior){
            maior = numero;
        } else if(numero < menor){
            menor = numero;
        }
    }

    int produto = maior * menor;

    printf("%i * %i = %i\n",maior,menor,produto);

    return 0;
}