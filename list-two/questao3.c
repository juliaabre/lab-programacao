#include <stdio.h>

int main(){
    int numero;
    int numerador = 1;

    printf("Informe um numero inteiro e positivo: ");
    scanf("%d",&numero);

    while (numero > 1)
    {
        numerador *= numero;
        numero--;
    }

    printf("O fatorial é %d\n",numerador);
    
    return 0;
}