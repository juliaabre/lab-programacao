#include <stdio.h>

int main() {

    float valor_conta;
    
    printf("Informe o valor da conta: ");
    scanf("%f",&valor_conta);

    float valor_total = valor_conta + ((valor_conta * 10)/100);

    printf("O valor total da conta e R$:%.2f\n",valor_total);

    return 0;
}