/* Função para realizar uma multiplicação de forma recursiva,
por meio de dois valores inteiros fornecidos pelo usuário. */
#include <stdio.h>

long multRecursiva(long x1, long x2) {
    if (x2 == 1)
        return x1;
    else
        return x1 + multRecursiva(x1, x2-1);

}

int main(void) {

    printf("%ld\n", multRecursiva(7, 5)); 

    return 0;
}