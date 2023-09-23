#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 8

int main(){
    unsigned char armarios = 0, mask = 1, numero;
    int opcao, posicao;

    srand(time(NULL));

    do{
        //Menu inicial
        puts("\n1. Ocupar armario\n2. Liberar armario\n3. Sair");
        scanf("%i",&opcao);

        if(opcao == 1){

            mask = mask<<(rand()%MAX);  //gera numeros aleatorios de 0 até 7
            armarios = armarios | mask;

            for(int i = 7; i>=0; i--){  //exibir a situação dos armarios

                numero = armarios >> i;

                if(numero & 1){
                    printf("Armario %i esta OCUPADO.\n",i);
                } else {
                    printf("Armario %i esta LIBERADO.\n",i);
                }
            }

            mask = 1;

        } else if(opcao == 2){

            puts("Informe a posicao do armario que deseja desocupar: ");
            scanf("%i", &posicao);

            mask = mask << posicao;
            armarios = armarios & ~mask;

            for(int k = 7; k>=0; k--){  //exibir a situação dos armarios

                numero = armarios >> k;
                
                if(numero & 1){
                    printf("Armario %i esta OCUPADO.\n",k);
                } else {
                    printf("Armario %i esta LIBERADO.\n",k);
                }
            }

            mask = 1;

        }
    } while(opcao != 3);

    return 0;

}
