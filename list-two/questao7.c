#include <stdio.h>

int main(){
    int divisao, dividendo, divisor;

    printf("Informe o valor do dividendo: ");
    scanf("%d",&dividendo);

    do{
        printf("Informe o valor do divisor diferente de zero: ");
        scanf("%d",&divisor);

    } while (divisor == 0);

    divisao = dividendo / divisor;

    printf("%d / %d = %d\n",dividendo,divisor,divisao);   

    return 0;
}