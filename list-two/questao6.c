#include <stdio.h>

int main(){
    int voto, contagem_voto1 = 0, contagem_voto2 = 0,nulo = 0, branco = 0, contagem_total = 0;
    char confirma;

    do{
        printf("Insira seu voto: ");
        scanf("%i",&voto);

        if(voto < 0){
            break;
        } else if(voto == 5){
            printf("confirma? [s/n] ");
            scanf(" %c",&confirma);
            if (confirma == 's'){
                contagem_voto1+=1;
                contagem_total+=1;}
            
        } else if(voto == 7){
            printf("confirma? [s/n] ");
            scanf(" %c",&confirma);
            if (confirma == 's'){
                contagem_voto2+=1;
                contagem_total+=1;
            }
        } else if(voto == 0){
            printf("confirma? [s/n] ");
            scanf(" %c",&confirma);
            if (confirma == 's'){
                branco+=1;
                contagem_total+=1;
            }
        } else {
            printf("confirma? [s/n] ");
            scanf(" %c",&confirma);
            if (confirma == 's'){
                nulo+=1;
                contagem_total+=1;
            }
        }
    } while(voto >= 0);

    printf("Candidato 1 = %.2f\n",(((float)contagem_voto1/(float)contagem_total)*100));
    printf("Candidato 2 = %.2f\n",(((float)contagem_voto2/(float)contagem_total)*100));
    printf("Nulo = %.2f\n",(((float)nulo/(float)contagem_total)*100));
    printf("Branco = %.2f\n",(((float)branco/(float)contagem_total)*100));

    return 0;
}