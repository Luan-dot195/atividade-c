#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
printf("\n*******************************************************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                                                                 *\n");
printf("\n* JPA-22: Par ou Impar                                                                                            *\n");
printf("\n*******************************************************************************************************************\n");
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("Par.\n");
    else
        printf("Impar.\n");

    return 0;
}