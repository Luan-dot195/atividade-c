#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n*******************************************************************************************************************\n");
printf("\n* Aluno: Luan de Sousa Lutes Galvao - RA: 0025992                                                                 *\n");
printf("\n* JPA-15:  Quantas caixas cabem dentro do caminhão?                                                               *\n");
printf("\n*******************************************************************************************************************\n");

    float altCam, larCam, compCam;
    float altCx, larCx, compCx;
    int quantidade;

    printf("Altura, largura e comprimento do caminhao: ");
    scanf("%f %f %f", &altCam, &larCam, &compCam);

    printf("Altura, largura e comprimento da caixa: ");
    scanf("%f %f %f", &altCx, &larCx, &compCx);

    quantidade = (int)(altCam / altCx) *
                 (int)(larCam / larCx) *
                 (int)(compCam / compCx);

    printf("Cabem %d caixas.\n", quantidade);

    return 0;
}