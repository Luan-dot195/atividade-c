#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n*******************************************************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                                                                 *\n");
printf("\n* JPA-16:  Múltiplo de 3 e/ou 5                                                                                   *\n");
printf("\n*******************************************************************************************************************\n");

    int pedido;

    printf("Digite o numero do pedido: ");
    scanf("%d", &pedido);

    if (pedido % 3 == 0 && pedido % 5 == 0)
        printf("Ganhou refrigerante e sobremesa.\n");
    else if (pedido % 3 == 0)
        printf("Ganhou refrigerante.\n");
    else if (pedido % 5 == 0)
        printf("Ganhou sobremesa.\n");
    else
        printf("Nao ganhou brinde.\n");

    return 0;
}