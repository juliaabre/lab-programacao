#include <stdio.h>

int main(){
    int numero, resto, rest, divisao;
    int inverso = 0; //variavel que receberá todo o numero separado para fazer a comparação
    int k = 100; // k servirá como unidade, dezena, centena...

    printf("Informe um numero de 5 digitos: ");
    scanf("%i",&numero);

    divisao = numero / 100;  //separar o numero em duas partes
    resto = numero % 1000;

    for(int i = 1; i <=3;i++){  //inverter apenas a segunda parte do numero
        rest = resto % 10;
        resto /= 10;
        inverso += rest * k;
        k/=10;
    }
    
    if(divisao == inverso) {  //comparar o inicio com o final do numero
        printf("%i e palindromo\n", numero);
    } else {
        printf("%i nao e palindromo\n", numero);
    }

    return 0;
}