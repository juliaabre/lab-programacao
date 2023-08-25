#include <stdio.h>

int main() {

    int x;
    printf("Informe um numero inteiro decimal: ");
    scanf("%i",&x);


    int divisao = x / 16;
    int resto = x % 16;

    if(divisao < 16){
        printf("%x",divisao);
        printf("%x",resto);
    } else {
            while (divisao >= 16){
                divisao = x / 16;
                resto = x % 16;
                printf("%x",resto);
                x = divisao;
                if (divisao < 16) {
                    printf("%x",divisao);
                }
            }       
        }
    return 0;
}