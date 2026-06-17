#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* JPA-33: Multiplos de 3 de 1 a 30                                        *\n");
printf("\n***************************************************************************\n");

    int i;

    for (i = 1; i <= 30; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}