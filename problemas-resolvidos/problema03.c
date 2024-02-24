/*  Programa que encontra todos os triângulos pitagóricos,
    com lados inteiros, que vão até o número definido
    pelo usuário.
*/
#include <stdio.h>

/* função que verifica se o triângulo é um triplo pitagórico */
void triploPitagorico(int n) {
    int cateto1, cateto2, hipo, count = 1;
    for (cateto1 = 1; cateto1 <= n; cateto1++) {
        for (cateto2 = 1; cateto2 <= n; cateto2++) {
            for (hipo = 1; hipo <= n; hipo++) {
                if (((cateto1*cateto1) + (cateto2*cateto2)) == (hipo*hipo)) {
                    printf("Triangulo %d: %d,%d,%d\n", count, cateto1, cateto2, hipo);
                    count++;
                }
            }
        }
    }
    printf("\n");
}

int main(void) {

    int num;

    printf("Insira um valor inteiro: ");
    scanf("%d", &num);

    printf("\nTriangulos pitagoricos ate o valor %d:\n", num);

    triploPitagorico(num);
    
    return 0;
}