#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
   Fa�a um programa que receba dois
   n�meros inteiros e imprima a soma desses doisn�meros.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numberUm, numberDois, soma;

    printf("Digite um n�mero: \t");
    scanf("%d", &numberUm);
    printf("Digite mais um n�mero: \t");
    scanf("%d", &numberDois);

    soma = numberUm + numberUm;

    printf("\n\n A soma dos n�mero �:\t %d \n\n", soma);

    return 0;
}
