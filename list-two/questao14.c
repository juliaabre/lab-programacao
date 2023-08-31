#include <stdio.h>
#include <math.h>

int main(){
    int numero, somatorio = 0, inicio, fim;

    printf("Informe um numero para iniciar:");
    scanf("%d",&inicio);

    printf("Informe um numero para terminar:");
    scanf("%d",&fim);

    if(inicio > fim){
            for(numero = inicio; numero >= fim; numero--){
                if(numero%3==0){
                    somatorio++;
                }
            }
            printf("Entre %d e %d, %d numeros sao divisiveis por 3\n",inicio,fim,somatorio);
    } else{
            for(numero = inicio; numero <= fim; numero++){
                if(numero%3==0){
                    somatorio++;
                }
            }
            printf("Entre %d e %d, %d numeros sao divisiveis por 3/n",inicio,fim,somatorio);
        }

    return 0;
}