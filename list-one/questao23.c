#include <stdio.h>

int main(){
    int numero, i;

    puts("Difite um numero de 3 digitos: ");
    scanf("%i",&numero);

    for(i=0; i < 2;i++ ){  //apenas 2 ciclos
        if(i == 0){
            printf("%i",numero%10);
        } else {
            numero /= 10;
            printf("%i",numero%10); //resto
            printf("%i",numero/10); //quociente
        }
    }

    return 0;
}