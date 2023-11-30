#include <stdio.h>

struct Professor{
    char nome[10];
    int idade;
};


struct Disciplina{
    char nome[10];
    int horas;
    int qtdAlunos;
    struct Professor prof;
};

int main(){


    return 0;
}