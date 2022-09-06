#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Math.h>

/*
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float horaDoDia;

    printf("Qual é horário? \t");
    scanf("%f", &horaDoDia);

    if(horaDoDia > 24.0){
        printf("\n\nPor favor, digite um horário válido! \n\n\n");
    }
    else{
        if(horaDoDia >= 6.0 && horaDoDia < 12.0){
            printf("\n\nManhã! \n\n\n");
        } // Manhã
        else if(horaDoDia >= 12.0 && horaDoDia < 18.0){
            printf("\n\nTarde! \n\n\n");
        } // Tarde
        else if(horaDoDia >= 18.0 && horaDoDia < 22.0){
            printf("\n\nNoite! \n\n\n");
        } // Noite
        else if(horaDoDia >= 22.0 && horaDoDia < 4.0){
            printf("\n\nTu é vida louca em! \n\n\n");
        } // Vida Louca
        else if(horaDoDia >= 4.0 && horaDoDia < 6.0){
            printf("\n\nTá de ressaca, né? \n\n\n");
        } // Ressaca
    }

    return 0;
}
*/
//Válidar hora do dia

/*
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char letra;

    printf("Digite uma letra: \t");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("\nA letra é volgal!!! \n\n");
    }
    else{
        printf("\nA letra é consoante!!! \n\n");
    }

    return 0;
}
*/
//Válidar vogais ou consoantes

/*
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float ladoUm, ladoDois, ladoTres;

    printf("Digite o lado um:\t");
    scanf("%f", &ladoUm);
    printf("Digite o lado dois:\t");
    scanf("%f", &ladoDois);
    printf("Digite o lado três:\t");
    scanf("%f", &ladoTres);

    if(ladoUm < ladoDois+ ladoTres || ladoDois < ladoUm+ ladoTres || ladoTres < ladoDois + ladoUm){

        if(ladoUm == ladoDois && ladoUm == ladoTres && ladoDois == ladoTres){
            printf("\n\nO triangulo é Equiláreto! \n\n");
        }else if(ladoUm == ladoDois || ladoUm == ladoTres || ladoDois == ladoTres){
            printf("\n\nO triangulo é isoceles! \n\n");
        }else{
            printf("\n\nO triangulo é escaleno! \n\n");
        }

    }else{
        printf("\n\nO triangulo não existe! \n\n");
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
    Escreva um programa que receba um número
    inteiro positivo e calcule o fatorial desse
    número.

    Use while para a validação da entrada
    Use for para o cálculo do fatorial


    int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numbr, fatorial, i;
    fatorial = 1;

    printf("Digite um número: \t");
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
        printf("Raiz quadrade de %d é: %d \n\n", numbr, raiz);

    }else
    {
        potencia = pow(numbr, 2);
        printf("Potencia de %d é: %d \n\n", numbr, potencia);
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


    printf("Número maior: %d \nNúmero menor: %d \n\n", maior, menor);
}



