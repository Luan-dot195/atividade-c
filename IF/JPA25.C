#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* JPA-25: Media Escolar                                                   *\n");
printf("\n***************************************************************************\n");
    float media;

    printf("Digite a media: ");
    scanf("%f", &media);

    if (media >= 7)
        printf("Aprovado.\n");
    else if (media >= 5)
        printf("Recuperacao.\n");
    else
        printf("Reprovado.\n");

    return 0;
}