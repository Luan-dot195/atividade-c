#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n******************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992     *\n");
printf("\n*JPA37: Soma de Numeros com WHILE                    *\n");
printf("\n******************************************************\n");
  
int numero, soma = 0;

    printf("Digite numeros (0 para encerrar):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        soma += numero;
        scanf("%d", &numero);
    }

    printf("Soma total = %d\n", soma);

  return 0;
}
