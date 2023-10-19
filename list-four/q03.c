#include <stdio.h>

int main(){
    int number, menor;

    //Ponteiros
    int *n = &number, *m = &menor;

    puts("Informe um numero para começar: ");
    scanf("%i",&number);

    *m = *n;

    do{        

        if(*n <= *m){
            *m = *n;
        }

        printf("Menor = %i\n",*m);

        puts("Informe um numero [digite -1000 para sair]: ");
        scanf("%i",&number);

    } while (*n != -1000);

    return 0;

}
