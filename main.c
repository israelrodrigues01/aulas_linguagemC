#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float notaUm, notaDois, notaTres, media;
	
	scanf("%f %f %f", &notaUm, &notaDois, &notaTres);
	
	media = (notaUm + notaDois + notaTres) / 3;
	
	printf("Média final %f", media);
	
	
	return 0;
}
