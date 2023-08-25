#include <stdio.h>

int main(){
    float a,b,c;

    printf("Informe o valor de a: \n");
    scanf("%f",&a);

    printf("Informe o valor de b: \n");
    scanf("%f",&b);

    c = a;
    a = b;
    b = c;

    printf("Valor de A: %.2f\nValor de B: %.2f\n",a,b);

    return 0;
}