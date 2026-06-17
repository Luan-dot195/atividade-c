#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA43: Soma dos Numeros Pares                     *\n");
printf("\n****************************************************\n");

    int i = 1;
    int soma = 0;

    while (i <= 100) {
        if (i % 2 == 0) {
            soma += i;
        }
        i++;
    }

    printf("Soma dos pares = %d\n", soma);

  return 0;
}
