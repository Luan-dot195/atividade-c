#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA48: Menu com Do-While                          *\n");
printf("\n****************************************************\n");

    int opcao;

    do {
        printf("\n1 - Mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Voce escolheu a Iniciar!\n");
        }

    } while (opcao != 2);

    printf("Programa encerrado.\n");

    return 0;
}