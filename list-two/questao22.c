#include <stdio.h>

int main(){
    int numero, resto = 1, contador = 0;

    printf("Informe um numero: ");
    scanf("%i",&numero);

    while (resto > 0){
        resto = numero % 10;
        if(resto == 7){
            contador++;
        }
        numero /= 10;
    }
    printf("O numero informado tem %i algorismos 7\n",contador);

    return 0;
}