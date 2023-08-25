#include <stdio.h>

int main() {

    float temperatura_celsius;
    
    printf("Informe a temperatura em Celsius: ");
    scanf("%f",&temperatura_celsius);

    float temperatura_fahrenheit = ( 9 * temperatura_celsius + 160)/5;

    printf("A temperatura %.1fC equivale a %.1fF",temperatura_celsius,temperatura_fahrenheit);

    return 0;
}