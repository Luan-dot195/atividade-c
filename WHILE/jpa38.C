#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n****************************************************\n");
printf("\n*Aluno: Luan de Sousa Lutes Galvao - RA: 0025992   *\n");
printf("\n*JPA38: Verificacao de Senha                       *\n");
printf("\n****************************************************\n");
   
int senha;

  printf("Digite a senha: ");
  scanf("%d", &senha);

    while (senha != 3110) {
        printf("Senha incorreta. Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso liberado!\n");

  return 0;
}
