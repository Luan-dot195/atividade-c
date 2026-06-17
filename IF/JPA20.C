#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* JPA-20: Ano Bissexto                                                    *\n");
printf("\n***************************************************************************\n");

    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
        printf("Ano bissexto.\n");
    else
        printf("Ano nao bissexto.\n");

    return 0;
}