#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Faça um programa que recebe um número e então imprima:
    “O número informado foi <número>.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int number;

    printf("Digite um número: \t");
    scanf("%d", &number);

    printf("\n\nNúmero que você digitou: %d \n\n", number);

    return 0;
}
