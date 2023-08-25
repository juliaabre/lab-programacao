#include <stdio.h>
#include <math.h>

int main(){
    int x, n;

    printf("Informe um valor para x: ");
    scanf("%i",&x);

    printf("Informe um valor para n: ");
    scanf("%i",&n);

    int retorna = x << n; //retorna = x * 2^n

    printf("%i * 2^%i = %i\n",x,n,retorna);

    return 0;
}