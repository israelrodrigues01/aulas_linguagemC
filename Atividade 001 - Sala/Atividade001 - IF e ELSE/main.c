#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Math.h>

/*
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float horaDoDia;

    printf("Qual � hor�rio? \t");
    scanf("%f", &horaDoDia);

    if(horaDoDia > 24.0){
        printf("\n\nPor favor, digite um hor�rio v�lido! \n\n\n");
    }
    else{
        if(horaDoDia >= 6.0 && horaDoDia < 12.0){
            printf("\n\nManh�! \n\n\n");
        } // Manh�
        else if(horaDoDia >= 12.0 && horaDoDia < 18.0){
            printf("\n\nTarde! \n\n\n");
        } // Tarde
        else if(horaDoDia >= 18.0 && horaDoDia < 22.0){
            printf("\n\nNoite! \n\n\n");
        } // Noite
        else if(horaDoDia >= 22.0 && horaDoDia < 4.0){
            printf("\n\nTu � vida louca em! \n\n\n");
        } // Vida Louca
        else if(horaDoDia >= 4.0 && horaDoDia < 6.0){
            printf("\n\nT� de ressaca, n�? \n\n\n");
        } // Ressaca
    }

    return 0;
}
*/
//V�lidar hora do dia

/*
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char letra;

    printf("Digite uma letra: \t");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("\nA letra � volgal!!! \n\n");
    }
    else{
        printf("\nA letra � consoante!!! \n\n");
    }

    return 0;
}
*/
//V�lidar vogais ou consoantes

/*
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float ladoUm, ladoDois, ladoTres;

    printf("Digite o lado um:\t");
    scanf("%f", &ladoUm);
    printf("Digite o lado dois:\t");
    scanf("%f", &ladoDois);
    printf("Digite o lado tr�s:\t");
    scanf("%f", &ladoTres);

    if(ladoUm < ladoDois+ ladoTres || ladoDois < ladoUm+ ladoTres || ladoTres < ladoDois + ladoUm){

        if(ladoUm == ladoDois && ladoUm == ladoTres && ladoDois == ladoTres){
            printf("\n\nO triangulo � Equil�reto! \n\n");
        }else if(ladoUm == ladoDois || ladoUm == ladoTres || ladoDois == ladoTres){
            printf("\n\nO triangulo � isoceles! \n\n");
        }else{
            printf("\n\nO triangulo � escaleno! \n\n");
        }

    }else{
        printf("\n\nO triangulo n�o existe! \n\n");
    }

    return 0;
}
*/
// Validar lado de um triangulo

/*
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numbr;
    scanf("%d", &numbr);

    switch (numbr){
        case 1:
            printf("Oi!");
            break;
        case 2:
            printf("Oi Oi!");
            break;
        case 3:
            printf("Oi Oi Oi!");
            break;
        case 4:
            printf("Oi Oi Oi Oi!");
            break;
        case 5:
            printf("Oi Oi Oi Oi Oi!");
            break;
        }

    return 0;
}
*/


/*
    Escreva um programa que receba um n�mero
    inteiro positivo e calcule o fatorial desse
    n�mero.

    Use while para a valida��o da entrada
    Use for para o c�lculo do fatorial


    int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numbr, fatorial, i;
    fatorial = 1;

    printf("Digite um n�mero: \t");
    scanf("%d", &numbr);

    while(numbr < 0)
    {
        scanf("%d", &numbr);
    }

    for(i = numbr; i > 0; i--){
        fatorial = fatorial * i;
    }
    printf("%d \n", fatorial);


    return 0;
}
*/


/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numbr, raiz, potencia;

    scanf("%d", &numbr);

    if(numbr > 0)
    {
        raiz = sqrt(numbr);
        printf("Raiz quadrade de %d �: %d \n\n", numbr, raiz);

    }else
    {
        potencia = pow(numbr, 2);
        printf("Potencia de %d �: %d \n\n", numbr, potencia);
    }


    return 0;
}

*/




int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c, d, maior, menor;

    scanf("%d", &a);
    maior = a; menor = a;

    scanf("%d", &b);
    if(b > maior) maior = b; if(b < menor) menor = b;

    scanf("%d", &c);
    if(c > maior) maior = c; if(c < menor) menor = c;

    scanf("%d", &d);
    if(d > maior) maior = d; if(d < menor) menor = d;


    printf("N�mero maior: %d \nN�mero menor: %d \n\n", maior, menor);
}



