#include <stdio.h>

struct Alunos{
    float n1, n2, media;
};

int main(){
    struct Alunos aluno1;
    //Entrada de Valores
    puts("Informe a primeira nota: ");
    scanf("%f", &aluno1.n1);
    puts("Informe a segunda nota: ");
    scanf("%f", &aluno1.n2);
    //Media
    aluno1.media = (aluno1.n1 + aluno1.n2)/2;

    printf("Media = %.1f\n",aluno1.media);

    return 0;
}