#include <stdio.h>
//Prototipo de estrutura
typedef struct aluno Aluno;

//definição de prototipo: struct aluno
struct aluno {
    char nome[50];
    char genero;
    float notas[3];
    int aprovado;
};

//inicialização de estrutura
Aluno aluno1 = {"João", 'M', {5.0, 6.0, 2.0}};
Aluno aluno2 = {.nome = "Ana", .notas = {5, 7, 9}, .genero = 'F'};
Aluno aluno3 = {.genero = 'M', .nome = "Pedro"};

// Prototipos de funções 
void listarNotas(int n, float notas[n]);
void exibirAluno(Aluno aluno); 
void listarAlunos(int n, Aluno alunos[n]);
int AlunoEstaAprovado(int n, float notas [n]);
void listarporGenero(int n, Aluno alunos[n], char genero);
void exibirAlunosAprovados(int n, Aluno alunos[n]); //media das notas>= 5 .
Aluno melhorAluno(int n, Aluno alunos[n]); 
void avaliarAlunos(Aluno *aluno);

int main() {
    Aluno alunos[] = {

    {"Letica", 'F', {7.0, 8.0, 9.0}},
    {"Maria", 'F', {7.0, 3.0, 9.0}},
    {"Joao", 'M', {5.0, 6.0, 2.0}},
    {"Ana", 'F', {8.0, 9.0, 10.0}},
    {"Pedro", 'M', {6.0, 1.0, 8.0}},
    {"Carla", 'F', {9.0, 10.0, 10.0}},
    {"Paulo" , 'M', {7.0, 8.0, 9.0}},
    {"Mariana", 'F', {5.0, 1.0, 7.0}},
    {"Marcos", 'м', {8.0, 9.0, 10.0}},
    {"Julia", 'F', {6.0, 7.0, 0.0}}, 
    {"Lucas", 'M', {9.0, 10.0, 10.0}},
};
int n = sizeof(alunos)/sizeof(Aluno); 
    printf("sizeof(Aluno): %ld\n", sizeof(Aluno)); 
    printf("numerosdealunos: %d\n", n);
    printf("Todos os alunos\n");
    listarAlunos(n, alunos);
    printf("Alunos do sexo masculino:\n");
    listarporGenero(n, alunos, 'M'); 
    printf("Alunos do sexo masculino:\n"); 
    listarporGenero(n, alunos, 'F' ); 
    printf("Alunos do sexo feminino:\n");
    return 0;
}

void exibirAluno(Aluno aluno){
    printf("%s, %c, notas:", aluno.nome, aluno.genero);
    listarNotas(3, aluno.notas);
}
void listarNotas(int n, float notas[n]){
    printf("[%.2f", notas[0]);
    for(int i = 1; i < n; i++){
        printf(", %.2f", notas[i]);
    }
    printf("]\n");
}
void listarAlunos(int n, Aluno alunos[n]){
    for(int i = 0; i < n; i++){
        printf("Alunos %d:", i);
        exibirAluno(alunos[i]);
    }
}
void listarporGenero(int n, Aluno alunos[n], char genero){
    for(int i = 0; i < n; i++){
        if(genero == alunos[i].genero){
            printf("aluno %d:", i);
            exibirAluno(alunos[i]);
        }
    }
}
int AlunoEstaAprovado(int n, float notas[n]){
    float media = 0;
    for(int i = 0; i < n; i++){
        media += notas[i]/n;
    }
    return media >= 5;
}
void exibirAlunosAprovados(int n, Aluno alunos[n]){
    for(int i = 0; i < n; i++){
        if(AlunoEstaAprovado(3, alunos[i].notas)){
            printf("Aluno %d:", i);
            exibirAluno(alunos[i]);
        }
    }
}
void avaliarAlunos(Aluno *aluno){
    aluno->aprovado = AlunoEstaAprovado(3, aluno->notas);
}
