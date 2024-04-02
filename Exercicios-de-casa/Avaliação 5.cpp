//a)
 int abs(int x) {
       if (x < 0)
           return -x;
       else
           return x;
   }

//b) 
int eVogal(char ch) {
       if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
           return 1;
       else
           return 0;
   }
//c) 
int eQuadrado(int x, int y) {
       if (x == (y * y))
           return 1;
       else
           return 0;
   }
//d) 
long int obterSegundos(int horas) {
       return horas * 3600;
   }
//e) 
long int converterHoras(int horas, char formato) {
       switch (formato) {
           case 'h':
           case 'H':
               return horas;
           case 'm':
           case 'M':
               return horas * 60;
           case 's':
           case 'S':
               return horas * 3600;
           default:
               return -1;
       }
   }

// Questão 1 letra A: 
// A diferença básica entre função e procedimento está na forma  como retornam valores.
// Uma função retorna um valor após sua execução, enquanto um procedimento não retorna nenhum valor. 

// Questão 1 letra B número I:
#include <iostream>
int soma(int a, int b) {
    return a + b;
}
int main() {
    int num1 = 5;
    int num2 = 3;
    int resultado;
    resultado = soma(num1, num2);
    std::cout << "A soma de " << num1 << " e " << num2 << " é: " << resultado << std::endl;
    return 0;
}

// Questão 1 lebtra B número II:
#include <iostream>
void sum(int a, int b) {
    std::cout << "A soma de " << a << " e " << b << " é: " << a + b << std::endl;
}
int main() {
    int num1 = 5;
    int num2 = 3;
    soma(num1, num2);
    return 0;
}
