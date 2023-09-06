#include <stdio.h>

int main(){
    int inicio,fim, somatorio = 0,contador = 0;
    float media;

    printf("Informe o inicio: ");
    scanf("%d",&inicio);

    printf("Informe o fim: ");
    scanf("%d",&fim);

    if(inicio > fim){
        for (int i = inicio; i >= fim; i--) {
            somatorio += i;
            contador++;            
        } 
    } else {
        for (int i = inicio; i <= fim; i++) {
            somatorio += i;
            contador++;
        }
    }

    media = (float)somatorio / (float)contador;

    printf("Media = %.2f\n",media);

    return 0;
}