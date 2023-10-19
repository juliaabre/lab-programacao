#include <stdio.h>

int main(){
    int number1, number2, temp_number;
    //Ponteiros
    int *n1 = &number1, *n2 = &number2, *tnum = &temp_number;

    //Entrada de daods
    puts("Informe um numero: ");
    scanf("%i",&number1);

    puts("Informe um numero: ");
    scanf("%i",&number2);

    *tnum = *n1;
    *n1 = *n2;
    *n2 = *tnum;

    printf("Numero 1 = %i\nNumero 2 = %i\n", *n1, *n2);

    return 0;
}