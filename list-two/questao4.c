#include <stdio.h>

int main(){
    int jose = 150;
    int pedro = 110;
    int ano = 0;

    while(jose >= pedro){
        jose += 2;
        pedro += 3;
        ano++;
    }

    printf("%d\n",ano);

    return 0;
}