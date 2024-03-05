/* Programa que verifica recursivamente se um número inteiro é primo */
#include <stdio.h>

int ePrimo(int num, int divisor) {
    if (divisor == 1) {
        return 1;   /* é primo */
    } else {
        if (num % divisor == 0) {
            return 0; /* não é primo */
        } else {
            return ePrimo(num, divisor-1); // chamada recursiva de ePrimo(), para o próximo divisor
        }
    }
}

int main(void) {
    int num;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    
    // O primeiro teste será com i = n-1:
    printf("%s\n", ePrimo(num, num - 1) ? "E primo" : "Nao e primo");
    
    return 0;
}