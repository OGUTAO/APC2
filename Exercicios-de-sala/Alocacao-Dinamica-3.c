#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa Pessoa; //prototipo

struct pessoa{
    char nome[101];
    unsigned int idade;
    float salario;
};

int main (void){
    // letra a) um inteiro
    int *pint = calloc(1, sizeof(int));
    // letra b) string de 100 posições = '/0'
    int *pstring = calloc(101, sizeof(char));
    // letra c) struct pessoa Pessoa
    Pessoa *pessoas = calloc(20, sizeof(Pessoa));
    // letra d) matriz 5x5
    int **matriz;
    matriz = calloc(5, sizeof(int *)); 
    // 5 ponteiros (linhas), para cada ponteiro, alocar 5 inteiros (colunas)
    for(int i = 0; i < 5; i++){
        matriz[i] = calloc(5, sizeof(int));
    }
    return 0;
}