#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argc != 4){
        printf("Necessario 3 elementos.");
        exit(1);
    }

    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    char operacao = argv[3][0];
    int resultado;

    switch (operacao){
    case '+':
        resultado = n1 + n2;
        printf("%i + %i = %i\n",n1,n2,resultado);
        break;
    case '*':
        resultado = n1 * n2;
        printf("%i * %i = %i\n", n1, n2, resultado);
        break;

    default:
        printf("Resultado invalido.");
        break;
    }

    return 0;
}