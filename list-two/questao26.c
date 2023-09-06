#include <stdio.h>

int main(){
    int  divisao, quociente, resto;
    int binario[8] = {0};
    int indice = 7;

    printf("BINARIO         OCTAL   HEXADECIMAL\n");

    for(int i = 1;  i < 257; i++){
        divisao = i;
        
        while (divisao > 0){
            binario[indice] = divisao % 2;
            divisao /=2;
            indice--;
        }
        
        for (int k = 0; k < 8; k++){
            printf("%i",binario[k]);
        }
        
        printf("          %o       %x\n",i,i );
    }
    
    return 0;
}