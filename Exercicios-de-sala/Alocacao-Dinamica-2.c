#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa Pessoa; // prototipo

struct pessoa{
    char nome[101];
    unsigned int idade;
    float salario;
};

int main(void){
    // letra a) expandir a string de 100 caracteres com + 50 caracteres
    int *pstring = calloc(101, sizeof(char)); // 100 + '/0'
    pstring = realloc(pstring, sizeof(char) *50); // + 50 caracteres
    // letra b) expandir o vetor de pessoas de 20 pessoas com + 5 pessoas
    Pessoa *pessoas = malloc(sizeof(Pessoa) *20); // aloca 20 pessoas
    pessoas = realloc(pessoas, sizeof(Pessoa) *5); // + 5 pessoas

    free(pstring);
    free(pessoas);
    return 0;
}