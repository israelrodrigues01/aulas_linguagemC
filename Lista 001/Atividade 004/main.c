#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Fa�a um programa que pe�a 3 notas de avalia��es e
    imprima a m�dia aritm�tica simples dessas notas.
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

    printf("A m�dia das notas �:\t %f \n\n", media);

    return 0;
}
