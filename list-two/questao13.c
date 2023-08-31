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
                if(numero%2==0){
                    somatorio += numero;
                    printf("%d + ",numero);
                }
            }
            printf("= %d",somatorio);
    } else{
            for(numero = inicio; numero <= fim; numero++){
                if(numero%2==0){
                    somatorio += numero;
                    printf("%d + ",numero);
                }
            }
            printf("= %d",somatorio);
        }

    return 0;
}