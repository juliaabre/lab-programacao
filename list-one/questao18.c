#include <stdio.h>
#include <math.h>

int main() {
    float raio;
    float pi = 3.14159;

    printf("Informe o valor do raio: ");
    scanf("%f",&raio);

    printf("Diametro = %.1f\n",2*raio);
    printf("Circunferencia = %.1f\n",2*raio*pi);
    printf("Area = %.1f",2*pi*pow(raio,2));

    return 0;
}