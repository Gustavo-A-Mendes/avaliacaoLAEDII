/* Implementando a Função de Ackermann A(m, n) definida por
    I.   n+1, se m = 0
    II.  A(m-1, 1), se m > 0, n = 0
    III. A(m-1, A(m, n-1)), se m > 0, n > 0
*/
#include <stdio.h>

int A(int m, int n) {
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return A(m-1, 1);
    else
        return A(m-1, A(m, n-1));
}

int main(void) {

    printf("%d\n", A(2, 7));

    return 0;
}