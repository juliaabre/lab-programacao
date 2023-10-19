#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int n;
    puts("Informe o valor do intervalo da matriz: ");
    scanf("%i",&n);

    int x[n]; //matriz x
    int y[n]; //matriz y
    int m[n][n]; //matriz m

    srand(time(NULL));

    //Gerar valores das matrizes
    for(int i = 0; i < n; i++){
        x[i] = rand()%n;
        printf("%i ",x[i]);
    }

    puts("\n");

    for(int k = 0; k < n; k++){
        y[k] = rand()%n;
        printf("%i ",y[k]);
    }

    puts("\n");

    for(int k = 0; k < n; k++){
        for(int l = 0; l < n; l++){
            m[k][l] = 0;
        }
    }

    //Contar
    for(int i = 0; i < n; i++){
        m[x[i]][y[i]] += 1;
    }

    //Mostrar
    puts("Matriz: ");
    for(int l = 0; l < n; l++){
        for(int p = 0; p < n; p++){
            printf("%i ",m[l][p]);
        }
        puts("\n");
    }


    return 0;
}
