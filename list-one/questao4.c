#include <stdio.h>

int main() {

    int x;
    
    printf("Informe um numero: ");
    scanf("%i",&x);

    printf("Triplo: %i\n",x*3);
    printf("Quadrado: %i\n",x*x);
    printf("Meio: %i\n",x/2);

    return 0;
}