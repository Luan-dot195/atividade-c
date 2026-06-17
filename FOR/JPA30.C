#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* JPA-30: Fatorial de um numero                                           *\n");
printf("\n***************************************************************************\n");

    int n, i;
    long long fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("Fatorial = %lld\n", fatorial);

    return 0;
}