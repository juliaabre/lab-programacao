#include <stdio.h>

int main() {

    int numero;
    
    printf("Informe um numero: ");
    scanf("%i",&numero);

    int sucessor = numero + 1;
    int antecessor = numero - 1;

    printf("Numero = %i\nSucessor = %i\nAntecessor = %i\n",numero,sucessor,antecessor);

    return 0;
}