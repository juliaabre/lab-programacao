#include <stdio.h>

int main() {
    int numero;

    printf("Informe um valor inteiro: ");
    scanf("%i",&numero);

    int resto = numero % 2;

    switch (resto){
    case 0:
        printf("%i e par.\n",numero);
        break;

    default:
        printf("%i e impar.\n",numero);
        break;
    }

    return 0;
}