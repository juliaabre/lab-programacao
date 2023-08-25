#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Informe o primeiro numero: ");
    scanf("%i",&numero1);

    printf("Informe o segundo numero: ");
    scanf("%i",&numero2);

    int soma = numero1 + numero2;
    int diferenca = numero1 - numero2;
    int produto = numero1 * numero2;
    int divisao = numero1 / numero2;
    int resto = numero1 % numero2;

    printf("Soma = %i\nDiferenca = %i\nProduto = %i\nQuociente = %i\nResto da Divisao = %i\n",soma,diferenca,produto,divisao,resto);

    return 0;

}