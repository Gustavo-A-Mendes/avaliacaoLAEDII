/* Programa que faz análises sobre uma função quadrática, utilizando
os valores de entrada como coeficientes */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* a função quadrática possui raízes reais, caso 
o valor de delta é maior ou igual a 0 */
int temRaizesReais(float a, float b, float c) {
    float delta = b*b - 4*a*c;
    if (delta >= 0) return 1;

    return 0;
}

/* função que encontra as raízes reais */
void raizes(float a, float b, float c, float *raizes) {
    float delta, r1, r2;
    
    delta = b*b - 4*a*c;
    
    r1 = (-b + sqrt(delta)) / 2;
    r2 = (-b - sqrt(delta)) / 2;

    raizes[0] = r1;
    raizes[1] = r2;
}


int main(void) {
    float A, B, C;
    float* raizes_funcao = (float*)malloc(2*sizeof(float));

    printf("Insira os coeficientes da equacao [a b c]:\n");
    scanf("%f %f %f", &A, &B, &C);

    if (temRaizesReais(A, B, C) == 1) {
        printf("\nA equacao possui raizes reais:\n");
        raizes(A, B, C, raizes_funcao);

        int i;
        for (i = 0; i < 2; i++) {
            printf("%.2f ", raizes_funcao[i]);
        }
        printf("\n");
    } else {
        printf("\nA equacao nao possui raizes reais.\n");
    }

    free(raizes_funcao);
    return 0;
}