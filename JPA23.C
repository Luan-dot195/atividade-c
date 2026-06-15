#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
printf("\n*******************************************************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                                                                 *\n");
printf("\n* JPA-23: Maior entre Dois Numeros                                                                                *\n");
printf("\n*******************************************************************************************************************\n");
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Maior: %d\n", a);
    else if (b > a)
        printf("Maior: %d\n", b);
    else
        printf("Os numeros sao iguais.\n");

    return 0;
}