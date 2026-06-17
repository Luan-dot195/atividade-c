#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* JPA-34: Verificar se numero e primo                                     *\n");
printf("\n***************************************************************************\n");

    int n, i, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2)
        printf("Numero primo.\n");
    else
        printf("Numero nao primo.\n");

    return 0;
}