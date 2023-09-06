#include <stdio.h>

int main(){
    int somatorio3 = 0, somatorio5 = 0;

    for(int i = 0;i <=200;i++){
        if(i<=100){
            if(i%3==0){
                somatorio3 += i;} 
        } else if(i > 100) {
            if(i%5==0){
                somatorio5 += i;}
        }
    }
    printf("O somatorio de numeros divisiveis por 3 entre 0 e 100 e %i\n",somatorio3);
    printf("O somatorio de numeros divisiveis por 5 entre 100 e 200 e %i\n",somatorio5);

    return 0;
}