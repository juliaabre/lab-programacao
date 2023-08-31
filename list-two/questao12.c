#include <stdio.h>

int main(){
    int numero, i, produto;

    printf("Informe um numero:");
    scanf("%d",&numero);

    for(i = 1; i <= 10; i++){
        produto = numero * i;
        printf("%d * %d = %d\n",numero, i, produto);
    }

    return 0;
}