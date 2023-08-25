#include <stdio.h>
#include <math.h>

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%i",&numero);

    printf("O numero informado ao quadrado e %.1f \n", pow(numero, 2)); //a biblioteca math sempre retorna um valor tipo double

    return 0;
}