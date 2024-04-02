#include <stdio.h>
                        // [0 1 2 3 4 5 6 7 8 9 10 11]
int main() {            // [H,E,L,L,O, ,W,O,R,L,D, \0]
    char string[] = "Hello World";
    char *p1 = string; // &string[0]
    int i = 0;

// notação e ponteiro
while (string [i] != '\0') {
    i++;

}

printf("length(comprimento da string): %d\n", i);

return 0;
}