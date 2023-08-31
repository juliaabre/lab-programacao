#include <stdio.h>
#include <math.h>

int main(){
    int numero, retorno;

    for(numero = 15; numero <= 90; numero++){
        if(numero%4==0){
            retorno = pow(numero,2);
            printf("%d^2 = %d\n",numero,retorno);
        }
    }
    return 0;
}