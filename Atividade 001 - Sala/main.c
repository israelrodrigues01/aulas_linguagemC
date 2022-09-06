#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Faça um programa que receba o valor atual do
    seu salário, calcule seu novo salário com um
    aumento de 15% e exiba o novo salário.
*/

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

	float salarioAtual, salarioNovo;

	printf("Digite seu sálario atual:\t R$");
	scanf("%f", &salarioAtual);

    salarioNovo = salarioAtual * 1.15;

	printf("\n\nSeu salário antigo era:\t %f \n\n", salarioAtual);
	printf("Seu novo salário é:\t %f \n\n", salarioNovo);

	return 0;
}
