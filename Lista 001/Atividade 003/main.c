#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
   Faça um programa que receba dois
   números inteiros e imprima a soma desses doisnúmeros.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numberUm, numberDois, soma;

    printf("Digite um número: \t");
    scanf("%d", &numberUm);
    printf("Digite mais um número: \t");
    scanf("%d", &numberDois);

    soma = numberUm + numberUm;

    printf("\n\n A soma dos número é:\t %d \n\n", soma);

    return 0;
}
