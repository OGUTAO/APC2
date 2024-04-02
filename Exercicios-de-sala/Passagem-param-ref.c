#include <stdio.h>

void muda_variavel_ref(int *n, int valor) {
    *n = valor;
}

void muda_variavel_ref_ponteiro(int *n, int valor) {
    *n = valor;
}

void zerarVetor(int vet[], int tamanho){
    for(int i = 0; i < tamanho; i++){
    vet[i] = 0;
    }
}

void listar(int vet[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d\n", vet[i]);
    }
    printf("\n");
}

void somarVetor(int vet[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma = soma + vet[i];
        printf("soma: %d\n", soma);
        if(soma > 10){
            printf("Excedeu 10\n");
            return;
        }
    }
}


int main (){
    int x = 5;
    muda_variavel_ref(&x, 7);
    muda_variavel_ref_ponteiro(&x, 9);
    printf("x: %d\n", x);

int vet[] = {1, 2, 3, 4, 5, 6};
listar(vet, 6);
somarVetor(vet, 6);
zerarVetor(vet, 6);
listar(vet, 6);
return 0;
}