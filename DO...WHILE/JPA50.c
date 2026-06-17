#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA50: Numero Positivo                            *\n");
printf("\n****************************************************\n");

    int numero;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

    } while (numero <= 0);

    printf("Numero aceito: %d\n", numero);

    return 0;
}
