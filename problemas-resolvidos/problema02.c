/* Programa que transcreve os caracteres de 0 a 127
   no códico ASCII, de 10 em 10
*/
#include <stdio.h>

int main() {
    int i;
    printf("Caracteres ASCII de 0 a 127:\n");

    // Imprimir caracteres ASCII de 0 a 127
    for (i = 0; i < 128; i++) {
        // Imprimir o caractere
        printf("%c ", i);

        // Imprimir uma nova linha a cada 10 caracteres
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}