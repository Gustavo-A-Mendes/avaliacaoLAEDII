/* Programa que determina o Máximo Divisor Comum
   de dois valores inteiros.
*/
#include <stdio.h>

/* função que determina o MDC pelo algoritmo de Euclides */
int mdc(int num1, int num2) {
    int r = num1;

    if (num1 < num2) {
        r = mdc(num1, num2-num1);
    } else if (num1 > num2) {
        r = mdc(num1-num2, num2);
    } 
    
    return r;
}


int main(void) {
    int A, B;

    printf("Insira dois numeros inteiros: ");
    scanf("%d %d", &A, &B);
    printf("%d\n", mdc(A, B));
    return 0;
}