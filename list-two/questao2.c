#include <stdio.h>

int main(){
    int semana;

    do {
        printf("Informe um numero de 1 ate 7: ");
        scanf("%d",&semana);

        switch (semana){
            case 1:
                puts("Domingo\n");
                break;
            
            case 2:
                puts("Segunda-feira\n");
                break;
            
            case 3:
                puts("Terça-feira\n");
                break;
            
            case 4:
                puts("Quarta-feira\n");
                break;
            
            case 5:
                puts("Quinta-feira\n");
                break;
            
            case 6:
                puts("Sexta-feira\n");
                break;
            
            case 7:
                puts("Sabado\n");
                break;
            
            case 0:
                break;
            
            default:
                puts("Numero de dia não valido\n");
                break;
            }
        } while(semana!=0);
        
    return 0;
}
