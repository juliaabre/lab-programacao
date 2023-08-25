#include <stdio.h>
#include <math.h>

int main() {
    float numero1,numero2,numero3;

    printf("Informe o valor do primeiro numero: ");
    scanf("%f",&numero1);

    printf("Informe o valor do segundo numero: ");
    scanf("%f",&numero2);

    printf("Informe o valor do terceiro numero: ");
    scanf("%f",&numero3);

    float media_aritmetica = (numero1 + numero2 + numero3)/3;

    float media_geometrica = pow((numero1 * numero2 * numero3),1.0/3);

    printf("Media Aritmetica = %.2f\n",media_aritmetica);
    printf("Media Geometrica = %.2f\n",media_geometrica);

    return 0;
}