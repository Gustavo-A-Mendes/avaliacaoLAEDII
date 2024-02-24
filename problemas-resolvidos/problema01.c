/*  Programa que imprime 5 linha com '*' adjacentes, na quantia
    equivalente ao inserido pelo usuário (de 1 a 30).
*/
#include <stdio.h>

void imprimeLinha(int num) {
    int i;
    for (i = 0; i < num; i++)
        printf("* ");       /* Imprime o número de '*' solicitado */

    printf("\n\n");
}

int main(void) {
    int num = 0;

    int i = 0;
    while (i < 5) {
        printf("Digite um valor entre 1 e 30: ");
        scanf("%d", &num);  /* Leitura do número */
        
        if (num >= 1 && num <= 30) { /* Verificação se o valor é válido */
            imprimeLinha(num);
            i++;
        } 
        else
            printf("Valor invalido! ");
    }
    
    return 0;
}