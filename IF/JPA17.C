#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* JPA-17: Sensor do Parque Tematico                                       *\n");
printf("\n***************************************************************************\n");

    int altura;

    printf("Digite a altura em cm: ");
    scanf("%d", &altura);

    if (altura >= 140) {
        printf("Liberado.\n");
    } else {
        printf("Barrado.\n");
    }

    return 0;
}