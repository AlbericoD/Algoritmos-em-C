#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

	/*� Apresentar os quadrados dos n�meros inteiros de 15 a 200
	int conver_resto;
	float num_raiz, num = 15, resto;
	printf("Quadrados dos n\xA3meros inteiros de 15 a 200\n");
	while (num <= 200)
	{
		num_raiz = sqrt(num);
		conver_resto = num_raiz;
		resto = num_raiz - conver_resto;
		if (resto == 0)
		{
			printf("\nO quadrado de %.f \x82 %.f \n", num, num_raiz);
			num++;
		}
		//o quadrado n�o � perfeito
		num++;
	}
	getchar();*/

	/*� Apresentar o total da soma obtida dos cem primeiros
n�meros inteiros;

	int num, num_resultado = 0;
	for (num = 0; num <= 100; num++)
	{
		num_resultado += num;
		if (num == 100)
		{
			printf("\nO resultado das somas \x82 %d", num_resultado);
		}
	}
	getchar();*/

	/*� Fa�a um programa que leia uma determinada quantidade de
dados informada pelo usu�rio e depois calcule a sua m�dia;

	float num, num_acumulado = 0, num_resultado;
	int contador = 0;
	char continuar,letra_grande;
	printf("\nCalculo de media\n\n");
	do
	{
		printf("\nEntre com um n\xA3mero\n");
		scanf("%f*c", &num);
		num_acumulado += num;
		printf("\nDeseja entrar com outro n\xA3mero? (S/N)\n");
		contador++;
		scanf(" %c", &letra_grande);
		continuar = toupper(letra_grande);
		system("cls");

	} while (continuar == 'S');
	num_resultado = num_acumulado / contador;
	printf("\nA media dos n\xA3meros digitados \x82: %.f\n\n\n\n\n", num_resultado);
	system("pause");
	return 0;*/

	/*� Fa�a um programa que coloque os n�meros de 1 a 100 na
tela na ordem inversa (come�ando em 100 e terminando em
1);
	int num;
	for (num = 100; num >= 0; num--)
	{
		printf("\nN\xA3mero : %d", num);
	}
	getchar();
	*/

	/*� Fa�a um programa que pergunte ao usu�rio quantos
n�meros deseja somar. Em seguida, leia a quantidade
informada de n�meros e apresentar o valor da soma;*/
	int quantidade = 1;
	float num, num_acumulado = 0;
	printf("\nQuantos n\xA3meros deseja somar?\n");
	scanf("%d*c", &quantidade);
	for (size_t i = 1; i <= quantidade; i++)
	{
		printf("\nEntre com o valor %d / %d\n", i, quantidade);
		scanf("%f*c", &num);
		num_acumulado += num;
		system("cls");
	}
	printf("\nA soma dos n\xA3meros \x82 : %.f\n\n\n", num_acumulado);
	system("pause");
	return 0;
}