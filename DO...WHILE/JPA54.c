#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA54: Validar numero entre 1 e 5                 *\n");
printf("\n****************************************************\n");

int numero;

    do {
        printf("Digite um numero entre 1 e 5: ");
        scanf("%d", &numero);

    } while (numero < 1 || numero > 5);

    printf("Numero valido!\n");

    return 0;
}