#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Fa�a um programa que receba o valor atual do
    seu sal�rio, calcule seu novo sal�rio com um
    aumento de 15% e exiba o novo sal�rio.
*/

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

	float salarioAtual, salarioNovo;

	printf("Digite seu s�lario atual:\t R$");
	scanf("%f", &salarioAtual);

    salarioNovo = salarioAtual * 1.15;

	printf("\n\nSeu sal�rio antigo era:\t %f \n\n", salarioAtual);
	printf("Seu novo sal�rio �:\t %f \n\n", salarioNovo);

	return 0;
}
