#include <stdio.h>

int main(){
    int anterior = 1, atual = 1, posterior;

    printf("%d %d ",anterior, atual);
    for(int i = 1; i <= 18; i++){
        posterior = anterior + atual;
        anterior = atual;
        atual = posterior;
        printf("%d ",posterior);
    }

    return 0;
}