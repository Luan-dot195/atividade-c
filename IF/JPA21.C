#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* JPA-21: Sinal do Numero                                                 *\n");
printf("\n***************************************************************************\n");
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0)
        printf("Positivo.\n");
    else if (numero < 0)
        printf("Negativo.\n");
    else
        printf("Zero.\n");

    return 0;
}