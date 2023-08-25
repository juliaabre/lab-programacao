#include <stdio.h>

int main() {

    int hora, minuto, segundo;
    
    printf("Informe as horas: ");
    scanf("%i",&hora);

    printf("Informe os minutos: ");
    scanf("%i",&minuto);

    printf("Informe os segundos: ");
    scanf("%i",&segundo);

    int valor_total = (hora * 3600) + (minuto * 60) + segundo;

    printf("O tempo informado em segundos = %i\n",valor_total);

    return 0;
}