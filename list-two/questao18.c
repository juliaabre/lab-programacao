#include <stdio.h>
#include <math.h>

int main(){
    float somatorio = 0;

    for(int i=0; i <= 64; i++){
        somatorio += pow(2,i);
    }

    printf("Somatorio = %.1f\n",somatorio);

    return 0;
}