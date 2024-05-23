#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa Pessoa; // prototipo

struct pessoa{
    char nome[101];
    unsigned int idade;
    float salario;
};

//EXERCICIO 1:
int main(){
    // letra a) alocar 1 inteiro
    int *pint = malloc(sizeof(int));
    // letra b) string de 100 posições = '/0'
    char *pstring = malloc(sizeof(char) *101);
    // letra c) array de float de 15 posições
    float *parray = malloc(sizeof(float) *15);
    // letra d)
    Pessoa *pessoas = malloc(sizeof(Pessoa) *20);
    return 0;
    // letra e) matriz 5x5
    int **matriz;
    // primeiro alocar as 5 linhas (5 ponteiros para inteiros)
    matriz = malloc(sizeof(int *) *5);
    // segundo, para cada linha, alocar 5 inteiros
    for (int i = 0; i < 5; i++){
        matriz[i] = malloc(sizeof(int) *5);
    }
}
