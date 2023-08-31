#include <stdio.h>
#include <math.h>

int main(){
    int prestacoes;
    float valor_compra, entrada;

    printf("Informe o valor da compra: ");
    scanf("%f",&valor_compra);

    if(fmod(valor_compra,3)){
        entrada = (valor_compra/3) + fmod(valor_compra,3);
        prestacoes = valor_compra/3;
    } else {
        entrada = (valor_compra/3);
        prestacoes = valor_compra/3;
    }

    printf("Valor da Entrada = %.2f\nValor das Prestações = %d",entrada,prestacoes);   

    return 0;
}