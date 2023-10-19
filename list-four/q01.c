#include <stdio.h>

int main(){
    int number1, number2, soma;
    //Ponteiros
    int *n1 = &number1;
    int *n2 = &number2;
    int *sum = &soma;

    //Entrada de daods
    puts("Informe um numero: ");
    scanf("%i",&number1);

    puts("Informe um numero: ");
    scanf("%i",&number2);

    *sum = *n1 + *n2;

    printf("[%p] Soma = %i\n", sum, *sum);

    return 0;
    
}