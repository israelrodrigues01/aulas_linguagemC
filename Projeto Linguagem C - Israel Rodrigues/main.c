#include <stdio.h>
#include <stdlib.h>

int main(){

    float notaUm, notaDois, notaTres, media;

    printf("Digite a primeira nota:\t");
    scanf("%f", &notaUm);

    printf("Digite a segunda nota:\t");
    scanf("%f", &notaDois);

    printf("Digite a terceira nota:\t");
    scanf("%f", &notaTres);

	media = (notaUm + notaDois + notaTres) / 3;

	printf("Média final: %f", media);

	return 0;
}
