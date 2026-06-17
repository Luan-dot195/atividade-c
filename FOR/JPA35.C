#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* JPA-35: Sequencia de Fibonacci                                           *\n");
printf("\n***************************************************************************\n");

    int n, i;
    int a = 0, b = 1, prox;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", a);

        prox = a + b;
        a = b;
        b = prox;
    }

    printf("\n");

    return 0;
}