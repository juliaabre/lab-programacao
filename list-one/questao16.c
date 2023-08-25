#include <stdio.h>

int main(){
    int horas_trabalhadas, dias_trabalhados;
    float valor_liquido, valor_bruto, valor_hora;

    printf("Informe o valor da hora: \n");
    scanf("%f",&valor_hora);

    printf("Informe o total de horas trabalhadas no dia: \n");
    scanf("%i",&horas_trabalhadas);

    printf("Informe o total de dias trabalhadas no mes: \n");
    scanf("%i",&dias_trabalhados);

    valor_bruto = (dias_trabalhados * horas_trabalhadas * valor_hora);

    if(valor_bruto <= 1320) {
        valor_liquido = valor_bruto - ((valor_bruto * 7.5)/100);
        printf("O valor bruto equivale a R$%.2f\nO valor liquido equivale a R$%.2f\n",valor_bruto,valor_liquido);

    } else if (valor_bruto > 1320 && valor_bruto <= 2571.29) {
        valor_liquido = valor_bruto - ((valor_bruto * 9)/100);
        printf("O valor bruto equivale a R$%.2f\nO valor liquido equivale a R$%.2f\n",valor_bruto,valor_liquido);

    } else if (valor_bruto > 2571.29 && valor_bruto <= 3856.94) {
        valor_liquido = valor_bruto - ((valor_bruto * 12)/100);
        printf("O valor bruto equivale a R$%.2f\nO valor liquido equivale a R$%.2f\n",valor_bruto,valor_liquido);

    } else if (valor_bruto > 3856.94 && valor_bruto <= 7504.49) {
        valor_liquido = valor_bruto - ((valor_bruto * 14)/100);
        printf("O valor bruto equivale a R$%.2f\nO valor liquido equivale a R$%.2f\n",valor_bruto,valor_liquido);

    } else if (valor_bruto > 7507.49) {
        valor_liquido = valor_bruto - ((valor_bruto * 14)/100);
        printf("O valor bruto equivale a R$%.2f\nO valor liquido equivale a R$%.2f\n",valor_bruto,valor_liquido);
    }

    return 0;
}