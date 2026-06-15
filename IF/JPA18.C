#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
printf("\n*******************************************************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                                                                 *\n");
printf("\n* JPA-18: Login Simples                                                                                           *\n");
printf("\n*******************************************************************************************************************\n");

char usuario[20];
    char senha[20];

    printf("Usuario: ");
    scanf("%s", usuario);

    printf("Senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, "William") == 0 &&
        strcmp(senha, "25122015") == 0) {
        printf("Acesso permitido.\n");
    } else {
        printf("Acesso negado.\n");
    }
        return 0;
}