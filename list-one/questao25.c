#include <stdio.h>

int main() {

    int segundos;

    printf("Informe os segundos: ");
    scanf("%i",&segundos);

    int valor_hora = (segundos / 3600);
    int valor_minuto = (segundos / 60);

    printf("O tempo informado em horas = %ih\n",valor_hora);
    printf("O tempo informado em minutos = %imin\n",valor_minuto);
    printf("O tempo informado em segundos = %is\n",segundos);

    return 0;
}