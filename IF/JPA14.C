#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n***************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                         *\n");
printf("\n* Questão: JPA-14: Tipo de Triangulo                                      *\n");
printf("\n***************************************************************************\n");

    float a, b, c;

    printf("Digite os tres lados: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c)
        printf("Triangulo Equilatero\n");
    else if (a == b || a == c || b == c)
        printf("Triangulo Isosceles\n");
    else
        printf("Triangulo Escaleno\n");

    return 0;
}