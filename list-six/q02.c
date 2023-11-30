#include <stdio.h>

#define TAM 10
struct Estoque{
    char nomePeca[TAM];
    int id;
    float valor;
    int numeroPedido;
};

int main(){
    struct Estoque produto1;
    //Entrada de Valores
    puts("Informe o nome do produto: ");
    scanf("%s", &produto1.nomePeca);

    puts("Informe a identificacao do produto: ");
    scanf("%i", &produto1.id);

    puts("Informe o valor do produto: ");
    scanf("%f", &produto1.valor);

    puts("Informe o numero do pedido: ");
    scanf("%i", &produto1.numeroPedido);
    //Saída
    printf("Nome = %s\nIdentificacao = %i\nPreco = %.2f\nNumero do pedido = %i",produto1.nomePeca, produto1.id,produto1.valor,produto1.numeroPedido);

    return 0;
}