#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* JPA-32: Quadrado dos Numeros de 1 a 10                                  *\n");
printf("\n***************************************************************************\n");

    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d² = %d\n", i, i * i);
    }

    return 0;
}