/* Programa que inverte um número. */
#include <stdio.h>
#include <math.h>

int inverteNumero(int num, int num_inv) {
    if (num == 0)
        return num_inv;
    else {
        num_inv *= 10;
        num_inv += num%10;
        return inverteNumero(num/10, num_inv);
    }
}

int main(void) {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O reverso de %d e igual a %d\n", num, inverteNumero(num, 0)); 

    return 0;
}