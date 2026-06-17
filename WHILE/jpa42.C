#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA42: Contagem de Numeros Impares                *\n");
printf("\n****************************************************\n");

int numero, contador = 0, i = 1;

    while (i <= 10) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if (numero % 2 != 0) {
            contador++;
        }

        i++;
    }

    printf("Quantidade de impares: %d\n", contador);


  return 0;
}
