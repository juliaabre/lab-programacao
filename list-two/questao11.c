#include <stdio.h>
#include <math.h>

int main(){
    int numero, retorno, inicio, fim;

    printf("Informe um numero para iniciar:");
    scanf("%d",&inicio);

    printf("Informe um numero para terminar:");
    scanf("%d",&fim);

    if(inicio > fim){
            for(numero = inicio; numero >= fim; numero--){
                if(numero%4==0){
                    retorno = pow(numero,2);
                    printf("%d^2 = %d\n",numero,retorno);
                }
            }
    } else{
            for(numero = inicio; numero <= fim; numero++){
                if(numero%4==0){
                    retorno = pow(numero,2);
                    printf("%d^2 = %d\n",numero,retorno);
                }
            }
        }

    return 0;
}