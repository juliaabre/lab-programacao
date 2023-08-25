#include <stdio.h>

int main(){

    for(int linha = 0; linha < 6; linha++){  //QUADRADO
        if((linha == 0) || (linha == 5)){
            printf("* * * * *\n");
        } else{
            printf("*       *\n");
        }
    } 

    printf("\n");

    for(int linha = 0; linha < 7; linha++){  //CIRCULO
        if((linha == 0) || (linha == 6)){
            printf("   * * *  \n");
        } else if((linha == 1) || (linha == 5)){
            printf(" *      * \n");
        } else {
            printf("*        *\n");
        }
    }

    printf("\n");

    for(int linha = 0; linha < 8; linha++){  //SETA
        if(linha == 1) {
            printf("  * * *  \n");
        } else if(linha == 2){
            printf("* * * * *\n");
        } else {
            printf("    *    \n");
        }
    }
    
    printf("\n");

    for(int linha = 0; linha < 7; linha++){  //LOSANGO
        if((linha == 0) || (linha == 6)){
            printf("      *      \n");
        } else if((linha == 1) || (linha == 5)){
            printf("    *   *    \n");
        } else if((linha == 2) || (linha == 4)) {
            printf("  *       *  \n");
        } else {
            printf("*           *\n");
        }
    }
    
    return 0;
}