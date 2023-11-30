#include <stdio.h>

struct Alunos{
    float n1, n2, media;
};

float media(float nota1, float nota2);

int main(){
    struct Alunos alunos[3];
    float mediaTotal;
    //Entrada de Valores
    for(int i = 0; i < 3; i++){

        printf("Informe o valor da primeira nota: ");
        scanf("%f", &alunos[i].n1);
        printf("Informe o valor da segunda nota: ");
        scanf("%f", &alunos[i].n2);
        //Media
        float nota1 = alunos[i].n1;
        float nota2 = alunos[i].n2;

        media(nota1, nota2);

    }

    return 0;
}

float media(float nota1, float nota2){
    float m;
    m = (nota1 + nota2)/2;
    printf("Media aluno = %.1f\n", m);
}