#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* JPA-24: Idade para Votar                                                *\n");
printf("\n***************************************************************************\n");
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
        printf("Pode votar.\n");
    else
        printf("Nao pode votar.\n");

    return 0;
}