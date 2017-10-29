#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cstdbool>;
int main(int argc, char *argv[]) {

	/*Ler 2 valores e somar os dois. Caso a soma seja maior que 10, mostrar a soma.
	No programa anterior, implementar que seja impresso a soma quando o resultado for
	menor do que 10 e tamb�m imprimir a seguinte mensagem: Soma inferior a 10.


	float num_um, num_dois, num_resultado;
	printf("\nEntre com o primeiro valor: \n");
	scanf("%f%*c", &num_um);
	printf("\nEntre com o segundo valor: \n");
	scanf("%f%*c", &num_dois);
	num_resultado = num_um + num_dois;
	if (num_resultado >=10)
	{
		printf("\nO resultado da soma \x82: %.f  e, \x82 maior que 10\n",num_resultado);
	}
	else
	{
		printf("\nO resultado da soma \x82: %.f e , \x82 menor que 10\n", num_resultado);
	}
	system("pause");
	return 0;*/

	/*. Entrar com um n�mero e imprimir a raiz quadrada do n�mero. Caso ele seja positivo.
	E o quadrado dele caso seja negativo. (pesquisar na WEB as fun��es de raiz
	quadrada e quadrado de um n�mero � n�o esquecer da biblioteca).

	float num_x, num_y;
	printf("\nEntre com um n\x83mero , vamos descobrir a raiz quadrada dele!\n");
	scanf("%f%*c", &num_x);
	num_y = sqrt(num_x);
	if (num_x >= 0)
	{
		printf("\nA Raiz quadrada  de %.f \x82 %.f  e \x82 positiva\n", num_x, num_y);
	}
	else
	{
		printf("\nA Raiz quadrada de %.f \x82 %.f e \x82 negativa\n", num_x, num_y);
	}
	system("pause");
	return 0;*/
	/*Ler um n�mero inteiro e verificar se est� compreendido entre 20 e 80. Se tiver,
	imprimir �O n�mero digitado esta entre 20 e 80�, sen�o imprimir �n�mero fora do
	intervalo�.
	int num;
	printf("\nEntre com um valor, para saber se est\xA0 dentro do intervalo 20 e 80\n ");
	scanf("%d%*c", &num);
	bool intervalo = (num >= 20 && num <= 80);
	if (!(intervalo))
	{
		printf("\nO n\xA3mero %d n\x83o est\xA0 no intervalo de 20 e 80\n", num);
	}
	else
	{
		printf("\nO n\xA3mero %d est\xA0 no intervalo entre 20 e 80\n", num);
	}
	system("pause");
	return 0;*/

	/*Ler um n�mero e imprimir igual a 20, menor que 20, maior que 20.
	int num;
	printf("\nEntre com um n\xA3mero: \n");
	scanf("%d%*c", &num);
	if (num == 20 )
	{
		printf("\nO n\xA3mero %d  \x82 igual 20\n ", num);
	}
	else if(num < 20)
	{
		printf("\nO n\xA3mero %d \x82 menor que 20\n ", num);
	}
	else
	{
		printf("\nO n\xA3mero %d \x82 maior que 20\n", num);
	}
	system("pause");
	return 0;
	*/
	/*Informe o tipo de carro (A, B e C). Informe o percurso rodado em km e calcule o
	consumo estimado, conforme o tipo, sendo (A=8, B=9 e C=12) km/litro (use o
	switch)*/
	char carro, carro_tratado;
	float carro_km, carro_consumo, valor_comb;
	bool continuar = true;
	do
	{
		system("cls");
		printf("\nEscolha um carro, cada carro tem o consumo diferente:\n");
		printf("\nA) Gol quadrado - 8km/litro \nB) Parati quadrada - 9km/litro \nC) Passat quadrado - 12km/litro\nD) Sair \n\n\n ");
		scanf("%c%*c", &carro);
		carro_tratado = toupper(carro);
		switch (carro_tratado)
		{
		case 'A':
			printf("\nO Gol quadrado \x82 um belo carro . . . \nQuantos km's pretende andar com ele?\n");
			scanf("%f%*c", &carro_km);
			printf("\nQual o valor do comb\xA3stivel na sua cidade?\n");
			scanf("%f%*c", &valor_comb);
			carro_consumo = (carro_km / 8) * valor_comb;
			printf("\nOlha, com esse carro em %.f km's voc\x88 gasta R$ %.2f /litros de combustivel\n\n\n", carro_km, carro_consumo);
			getchar();
			break;
		case 'B':
			printf("\nA parati quadrada \x82 um belo carro com bagageiro . . . \nQuantos km's pretende andar com ele?\n");
			scanf("%f%*c", &carro_km);
			printf("\nQual o valor do comb\xA3stivel na sua cidade?\n");
			scanf("%f%*c", &valor_comb);
			carro_consumo = (carro_km / 9) * valor_comb;
			printf("\nOlha, com esse carro em %.f km's voc\x88 gasta R$ %.2f /litros de combustivel\n\n\n", carro_km, carro_consumo);
			getchar();
			break;
		case 'C':
			printf("\nO Passat quadrado \x82 um belo carro mas bebe muito . . . \nQuantos kms pretende andar com ele?\n");
			scanf("%f%*c", &carro_km);
			printf("\nQual o valor do comb\xA3stivel na sua cidade?\n");
			scanf("%f%*c", &valor_comb);
			carro_consumo = (carro_km / 12) * valor_comb;
			printf("\nOlha, com esse carro em %.f km's voc\x88 gasta R$ %.2f /litros de combustivel\n\n\n", carro_km, carro_consumo);
			getchar();
			break;
		case 'D':
			printf("\nSaindo . . .\n\n\n");
			continuar = false;
			getchar();
			break;
		default:
			printf("\nEscolha uma op\x87\x84o valida\n\n\n");
			getchar();
			break;
		}
	} while (continuar);
	system("pause");
	return 0;

}