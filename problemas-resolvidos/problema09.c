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
    int X1, X2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &X1, &X2);

    printf("%ld\n", multRecursiva(X1, X2)); 

    return 0;
}