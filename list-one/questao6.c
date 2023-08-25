#include <stdio.h>

int main() {

    float altura;
    char genero;
    
    printf("Informe seu genero: ");
    scanf("%c",&genero);

    printf("Informe sua altura: ");
    scanf("%f",&altura);

    if (genero == 'f') {
        float peso_ideal = 62.1 * altura - 44.7; //calculo do peso ideal para mulheres
        printf("o seu peso ideal e %.2f\n",peso_ideal);
    } else if (genero == 'm'){
        float peso_ideal = 72.7 * altura - 58; //calculo do peso ideal para homens
        printf("o seu peso ideal e %.2f\n",peso_ideal);
    } else {
        printf("Genero invalido.\n");
    }

    return 0;
}