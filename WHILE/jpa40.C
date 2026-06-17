#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA40: Tabuada com WHILE                          *\n");
printf("\n****************************************************\n");
   
int numero, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }
  return 0;
}
