#include <stdio.h>

int main(){
    int dias_trabalhados;
    float valor_liquido, valor_bruto;

    printf("Informe o total de dias trabalhados: \n");
    scanf("%i",&dias_trabalhados);

    valor_bruto = (50.25 * dias_trabalhados);

    if(dias_trabalhados <= 10) {
        valor_liquido = valor_bruto - ((valor_bruto * 10)/100);
        printf("O valor liquido a receber e R$%.2f\n",valor_liquido);
    } else if (10 < dias_trabalhados && dias_trabalhados <= 20) {
        valor_liquido = valor_bruto + ((valor_bruto * 10)/100);
        printf("O valor liquido a receber e R$%.2f\n",valor_liquido);
    } else if (dias_trabalhados > 20) {
        valor_liquido = valor_bruto + ((valor_bruto * 20)/100);
        printf("O valor liquido a receber e R$%.2f\n",valor_liquido);
    }

    return 0;
}