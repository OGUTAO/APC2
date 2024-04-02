#include <stdio.h>

int main() {
int v[]= {1, 2, 3, 4, 5};
// notação de vetor
for(int i = 0; i < 5; i++){
printf("v[%d]: %d\n", i, v[i]);
}
printf("\n");

// notação de ponteiro
for(int i = 0; i < 5; i++){
printf("*(v+%d): %d\n", i,*(v+i));
}
printf("\n");

int *p = v;

// notação de vetor ultilizando ponteiro
for(int i = 0; i < 5; i++ ){
printf("p[%d]: %d\n", i, p[i]);
}
printf("\n");

// notação de ponteiro ultilizando vetor
for(int i = 0; i < 5; i++ ){
    printf("*p[%d]: %d\n", i, (*p+i)); 
}
return 0;
}