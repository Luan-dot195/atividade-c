#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
printf("\n*******************************************************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                                                                 *\n");
printf("\n* JPA-19: Ordem Decrescente                                                                                       *\n");
printf("\n*******************************************************************************************************************\n");

int a, b, c, temp;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}