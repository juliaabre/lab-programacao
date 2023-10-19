#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int tam, n; //Tamanho do Vetor e intervalo
    int *x, *f;  //vetor
    int *pn = &n;

    puts("Infome o tamanho do vetor: ");
    scanf("%i",&tam);

    puts("Infome o intervalo do vetor: ");
    scanf("%i",&n);

    x = malloc(tam * sizeof(int));
    f = malloc(*(pn-1) * sizeof(int));  //vai receber no max o valor do intervalo

    //Verificação
    if(!x){
        puts("Nao ha memoria o suficiente.");
        exit(1);
    }

    //Gerar valores
    for(int i = 0; i < tam; i++){
        *(x + i) = rand()%*pn;
        printf("%i ",*(x + i));
    }

    for(int i = 0; i < tam; i++){
        *(f + i) = 0;
    }

    //Contar
    for(int k = 0; k < tam; k++){
        *(f + *(x + k)) += 1;
    }

    puts("Matriz F: ");

    //Exibir vetor
    for(int i = 0; i < tam; i++){
        printf("%i ",*(f + i));
    }

    return 0;

}
