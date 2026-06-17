#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA52: Soma ate ser Multiplo de 10                *\n");
printf("\n****************************************************\n");

    int numero, soma = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;

    } while (numero % 10 != 0);

    printf("Soma total = %d\n", soma);

    return 0;
}