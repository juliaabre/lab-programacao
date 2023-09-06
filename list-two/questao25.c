#include <stdio.h>

int main(){
    float pi = 0, k = 1;

    for(int i = 1; i <= 100; i++){
        pi += (4.0 * k / (2*i-1));
        if(i%2){
            printf("%f\n",pi);
        }
        k = -k;
    }


    return 0;
}