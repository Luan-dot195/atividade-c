#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA53: Confirmar Saida com s                      *\n");
printf("\n****************************************************\n");

char resposta;

    do {
        printf("Executando operacao...\n");
        printf("Deseja sair? (s/n): ");
        scanf(" %c", &resposta);

    } while (resposta != 's' && resposta != 'S');

    printf("Programa encerrado.\n");

    return 0;
}
