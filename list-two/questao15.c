#include <stdio.h>
#include <math.h>

int main(){
    int expoente, retorno;

    for(expoente = 0; expoente <=7;expoente++){
        retorno = pow(3,expoente);
        printf("3^%d = %d\n",expoente,retorno);
    }

    return 0;
}