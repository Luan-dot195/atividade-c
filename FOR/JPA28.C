#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* JPA-28: Soma de 1 a 100                                                 *\n");
printf("\n***************************************************************************\n");

    int i, soma = 0;

    for (i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("Soma = %d\n", soma);

    return 0;
}