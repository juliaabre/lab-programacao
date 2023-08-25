#include <stdio.h>

int main() {

    float altura, largura, comprimento;
    
    printf("Informe a altura da caixa: ");
    scanf("%f",&altura);

    printf("Informe a largura da caixa: ");
    scanf("%f",&largura);

    printf("Informe o comprimento da caixa: ");
    scanf("%f",&comprimento);

    if(altura == 0 || largura == 0 || comprimento == 0) {
        printf("Informe um valor diferente de zero.\n");
    } else {
        float volume = altura * largura * comprimento;
        printf("O volume da caixa e %.2f\n",volume);
    }

    return 0;
}