#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA55: Maior Numero Informado                     *\n");
printf("\n****************************************************\n");

int numero;
int maior = 0;

    do {
   printf("Digite um numero (negativo para sair): ");
   scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

    } while (numero >= 0);

    printf("Maior numero informado: %d\n", maior);

    return 0;
}