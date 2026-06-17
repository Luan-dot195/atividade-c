#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA41: Verificacao de Numero Primo                *\n");
printf("\n****************************************************\n");

int numero, i = 1, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (i <= numero) {
        if (numero % i == 0) {
            divisores++;
        }
        i++;
    }

    if (divisores == 2)
        printf("Numero primo.\n");
    else
        printf("Numero nao primo.\n");

  return 0;
}
