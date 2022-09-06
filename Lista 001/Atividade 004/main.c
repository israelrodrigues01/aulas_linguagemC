#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Faça um programa que peça 3 notas de avaliações e
    imprima a média aritmética simples dessas notas.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float notaUm, notaDois, notaTres, media;

    printf("\nDigite o a primeira nota:\t");
    scanf("%f", &notaUm);
    printf("\nDigite o a primeira nota:\t");
    scanf("%f", &notaDois);
    printf("\nDigite o a primeira nota:\t");
    scanf("%f", &notaTres);

    media = (notaUm + notaDois + notaTres) / 3.0;

    printf("A média das notas é:\t %f \n\n", media);

    return 0;
}
