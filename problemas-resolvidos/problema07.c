/* Programa que verifica se um número inteiro é primo */
#include <stdio.h>

int isPrime(int n) {
    int i;
    int divisores = 0;
    for (i = 1; i <= n; i++)
        if (n%i==0) divisores++;
    
    if (divisores == 2)
        return 1;       /* é primo */

    return 0;           /* não é primo */
}

int main(void) {
    int num;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    printf("%s\n", isPrime(num) ? "E primo" : "Nao e primo");
    return 0;
}