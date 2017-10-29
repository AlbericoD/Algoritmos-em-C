#include <stdio.h>
#include <stdlib.h>

void logo()
{
    printf("\n \xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
    printf("\n \xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n");
    printf("\n \xDB\xDB\xDB\xDB\xDB\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    printf("\n \xDB\xDB\t\xDB\xDB\   \xDB\xDB\t\xDB\xDB  \xDB  \xDB\xDB");
    printf("\n \xDB\xDB\xDB\xDB\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\t\xDB\xDB  \xDB  \xDB\xDB");
    printf("\n \xDB\xDB\t\xDB\xDB\   \xDB\xDB\t\xDB\xDB  \xDB  \xDB\xDB");
    printf("\n \xDB\xDB\t\xDB\xDB\   \xDB\xDB\t\xDB\xDB  \xDB  \xDB\xDB\n");
    printf("\n \xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
    printf("\n \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD");
    printf("\n \xBA Alb\x82rico RA:20171571 \xBA");
    printf("\n \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n\n");
}

int main(int argc, char *argv[])
{
    /*
	* Elabore um programa que imprima o resultado das seguintes operações:
	* a) 150 + 200 || b) 350 � 100 || c) 500 + (-100) || d) 30 * 5 +12
    * e) 500/5     || f) 3000/15 + 1200 || g) 535/11 || h) ((456/13) *5,5)+12
    * (2*2*2+56)/45
	*/
    //Logo FAM + Nome e RA.
    /*
    int num_um, num_dois, num_resultado;
	printf("Exercicio A) 150 + 200\n");
	printf("\nEntre com o primeiro n\xA3mero:\n");
	scanf("%d", &num_um);
	printf("\nEntre com o segundo n\xA3mero:\n");
	scanf("%d", &num_dois);
	printf("\nProcessando o Resultado . . .\n");
	num_resultado = num_um + num_dois;
	printf("\nO resultado \x82: %2d.\n\n", num_resultado);
	system("pause");
	return 0;
	
	int num_um, num_dois, num_resultado;
	printf("Exercicio B) 350 - 100\n");
	printf("\nEntre com o primeiro n\xA3mero:\n");
	scanf("%d", &num_um);
	printf("\nEntre com o segundo n\xA3mero:\n");
	scanf("%d", &num_dois);
	printf("\nProcessando o Resultado . . .\n");
	num_resultado = num_um - num_dois;
	printf("\nO resultado \x82: %2d.\n\n", num_resultado);
	system("pause");
	return 0;
	
	int num_um, num_dois, num_resultado;
	printf("Exercicio C) 500 +(-100)\n");
	printf("\nEntre com o primeiro n\xA3mero:\n");
	scanf("%d", &num_um);
	printf("\nEntre com o segundo n\xA3mero:\n");
	scanf("%d", &num_dois);
	printf("\nProcessando o Resultado . . .");
	num_resultado = num_um + (-num_dois);
	printf("\nO Resultado \x82 : %2d.\n\n",num_resultado);
	system("pause");
	return 0;
	
	int num_um, num_dois, num_tres, num_resultado;
	printf("Exercicio D) 30 * 5 +12");
	printf("\nEntre com o primeiro n\xA3mero a ser multiplicado:\n\r");
	scanf("%d", &num_um);
	printf("\nEntre com o segundo n\xA3mero, o multiplicador:\n\r");
	scanf("%d", &num_dois);
	printf("\nEntre com o terceiro n\xA3mero, para somar no resultado:\n\r");
	scanf("%d", &num_tres);
	printf("\nProcessando o Resultado . . .");
	num_resultado = (num_um * num_dois) + num_tres;
	printf("\nO Resultado \x82: %2d\n\n", num_resultado);
	system("pause");
	return 0;

	int num_um, num_dois, num_resultado;
	printf("Exercicio E) 500/5\n");
	printf("\nEntre com o primeiro n\xA3mero:\n");
	scanf("%d", &num_um);
	printf("\nEntre com o segundo n\xA3mero:\n");
	scanf("%d", &num_dois);
	printf("\nProcessando o Resultado . . .");
	num_resultado = num_um / num_dois;
	printf("\nO Resultado \x82: %2d.\n\n ", num_resultado);
	system("pause");
	return 0;
	
	int num_um, num_dois, num_tres, num_resultado;
	printf("Exercicio F) 3000/15 + 1200\n");
	printf("Entre com o primeiro n\xA3mero, o dividendo:\n");
	scanf("%d", &num_um);
	printf("Entre com o segundo n\xA3mero, o divisor:\n");
	scanf("%d", &num_dois);
	printf("Entre com o terceiro n\xA3mero, para somar ao resultado: \n");
	scanf("%d", &num_tres);
	printf("\nProcessando o Resultado . . .\n");
	num_resultado = (num_um / num_dois) + num_tres;
	printf("\nO Resultado \x83 : %2d.\n\n", num_resultado);
	system("pause");
	return 0;
	
	float num_um, num_dois, num_tres, num_quatro, num_resultado;
	printf("Exercicio H) ((456/13) * 5.5) +12");
	printf("\nEntre com o primeiro n\xA3mero, o dividendo:\n");
	scanf("%f", &num_um);
	printf("\nEntre com o segundo n\xA3mero, o divisor:\n ");
	scanf("%f", &num_dois);
	printf("\nEntre com o terceiro n\xA3mero, o multiplicador:\n");
	scanf("%f", &num_tres);
	printf("\nEntre com o quarto n\xA3mero, para somar ao resultado:\n");
	scanf("%f", &num_quatro);
	printf("\nProcessando o Resultado . . . \n");
	num_resultado = ((num_um / num_dois)*num_tres) + num_quatro;
	printf("\nO resultado \x82: %.0f.\n\n", num_resultado);
	system("pause");
	return 0;
	*/
    logo();
	float num_um, num_dois, num_tres,num_quatro, num_resultado;
	printf("Exercicio I) (2*2*2+56)/45 || (2^3 +56)/45");
	printf("\nEntre com o primerio n\xA3mero, a base:\n");
	scanf("%f", &num_um);
	printf("\nEntre com o segundo n\xA3mero, o expoente:\n");
	scanf("%f", &num_dois);
	printf("\nEntre com o terceiro n\xA3mero, a soma do resulado:\n");
	scanf("%f", &num_tres);
	printf("\nEntre com o quarto n\xA3mero, o dividendo:\n");
	scanf("%f", &num_quatro);
	printf("\nProcessando o Resultado . . .\n");
	num_resultado = (pow(num_um, num_dois) + num_tres) / num_quatro;
	printf("\nO Resultado \x82: %.2f\n", num_resultado);
	system("pause");
	return 0;

}