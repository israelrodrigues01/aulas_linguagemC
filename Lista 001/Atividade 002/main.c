#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Fa�a um programa que recebe um n�mero e ent�o imprima:
    �O n�mero informado foi <n�mero>.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int number;

    printf("Digite um n�mero: \t");
    scanf("%d", &number);

    printf("\n\nN�mero que voc� digitou: %d \n\n", number);

    return 0;
}
