#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA44: Contagem de Digitos                         *\n");

printf("\n****************************************************\n");

int numero, contador = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    while (numero > 0) {
        numero /= 10;
        contador++;
    }

    printf("Quantidade de digitos: %d\n", contador);

  return 0;
}
