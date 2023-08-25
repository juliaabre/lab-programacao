#include <stdio.h>

int main() {

    float cotacao_dolar, valor_real;

    printf("Informe a cotacao do dolar: ");
    scanf("%f",&cotacao_dolar);

    printf("Informe o valor em reais para a conversao: ");
    scanf("%f",&valor_real);

    float total_dolar = valor_real / cotacao_dolar;

    printf("RS%.2f equivale a U$%.2f",valor_real,total_dolar);

    return 0;
}