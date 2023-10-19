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
    puts("Matriz X = ");
    for(int i = 0; i < n; i++){
        x[i] = rand()%n;
        printf("%i ",x[i]);
    }

    puts("\n");

    int r = rand()%10;
    printf("r = %i ",r);

    for(int k = 0; k < n; k++){

        if(r >= 0 && r <= 3){
                y[k] = x[k];
        } else if(r > 3 && r <= 5){
                y[k] = x[k] - 1;
        } else if(r > 5 && r <= 7){
                y[k] = x[k] + 1;
        } else if(r >= 8 && r <= 9){
                y[k] = x[k] - 2;
        } else if(r > 9 && r <= 10){
                y[k] = x[k] + 1;
        }     
    }

    puts("\n");
    puts("Matriz Y = ");

    for(int k = 0; k < n; k++){
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
