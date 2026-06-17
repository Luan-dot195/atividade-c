#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA45: Menu com While                             *\n");
printf("\n****************************************************\n");

int opcao;

    printf("1 - Mostrar mensagem\n");
    printf("2 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    while (opcao != 2) {
        if (opcao == 1) {
            printf("Voce escolheu a mensagem!\n");
        }

        printf("\n1 - Mostrar mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
    }
  return 0;
}
