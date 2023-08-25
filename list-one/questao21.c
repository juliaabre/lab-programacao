#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Informe um valor inteiro: ");
    scanf("%i",&numero1);

    printf("Informe um valor inteiro: ");
    scanf("%i",&numero2);

    int multiplo = numero1 % numero2;

    switch (multiplo){
    case 0:
        printf("%i e multiplo de %i.\n",numero1,numero2);
        break;

    default:
        printf("%i nao e multiplo de %i.\n",numero1, numero2);
        break;
    }

    return 0;
}