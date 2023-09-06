#include <stdio.h>

int main(){
    int temperaturaC, temperaturaF;

    for(temperaturaC = 10; temperaturaC <= 100; temperaturaC+=10){
        temperaturaF = temperaturaC * 1.8 + 32;
        printf("%dC = %dF\n",temperaturaC,temperaturaF);
    }

    return 0;

}