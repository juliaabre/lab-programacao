#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2;

    printf("Informe um valor para x1: ");
    scanf("%f",&x1);

    printf("Informe um valor para x2: ");
    scanf("%f",&x2);

    printf("Informe um valor para y1: ");
    scanf("%f",&y1);

    printf("Informe um valor para y2: ");
    scanf("%f",&y2);

    float distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("Distancia = %.2f\n",distancia);

    return 0;
}