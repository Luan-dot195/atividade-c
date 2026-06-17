#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA49: Verificacao de Senha                       *\n");
printf("\n****************************************************\n");

    int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != 6767) {
            printf("Senha incorreta.\n");
        }

    } while (senha != 6767);

    printf("Acesso liberado!\n");

    return 0;
}