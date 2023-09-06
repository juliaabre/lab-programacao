#include <stdio.h>
#include <math.h>

int main(){
    int cateto1, cateto2,hipotenusa;

    for(hipotenusa = 1; hipotenusa <= 500; hipotenusa++){
        for(cateto1 = 1; cateto1 <= 500; cateto1++){
            for(cateto2 = 1; cateto2 <= 500; cateto2++){
                int soma_catetos = pow((float)cateto1,2.0) + pow((float)cateto2,2.0);
                int hip_quadrado = pow((float)hipotenusa,2.0);

                if (soma_catetos == hip_quadrado){
                    printf("Triplas de Pitagoras %i - %i - %i\n",cateto1,cateto2,hipotenusa);
                } else if(soma_catetos > hip_quadrado) {
                    break;
                }
                
            }
        }
    }

    return 0;
}
