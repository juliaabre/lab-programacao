#include <stdio.h>

int main(){
    int fatorial = 1, k;

    for(int i=1; i <=10; i++){        
        if (i%2){
            fatorial *= i;
            printf("%d! = %d\n",i,fatorial);
        } 
    }
    return 0;
}