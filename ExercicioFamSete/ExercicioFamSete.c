#include <stdio.h>
#include <stdlib.h>
#define IMPOSTO_FEDERAL 0.2
#define IMPOSTO_LIQUIDO 0.05

int main(int argc, char *argv[]) {

	float valor_hora, qtd_trabalhadas, salario_bruto, 
	salario_liquido, calculo_federal, calculo_estadual;

	printf("\nCalculo de Salario liquido\n\n");
	printf("\nEntre com o valor da hora trabalhada, formato: \nR$( 00.00 )\n\n");
	scanf("%f*c", &valor_hora);
	printf("\nEntre com a quantidade de hora trabalhada, formato: \nHoras, minutos, segundos(000.00.00)\n\n");
	scanf("%f*c", &qtd_trabalhadas);

	salario_bruto = valor_hora * qtd_trabalhadas;
	calculo_federal = salario_bruto * IMPOSTO_FEDERAL;
	calculo_estadual = (salario_bruto - calculo_federal) * IMPOSTO_LIQUIDO;
	salario_liquido = salario_bruto - (calculo_federal + calculo_estadual);

	printf("\nSalario bruto \x82  de R$ %.2f\n\n", salario_bruto);
	printf("\n\nValor do imposto Federal sobre o salario bruto \x82 de R$ %.2f\n", calculo_federal);
	printf("\nValor do imposto Estadual \x82 de R$ %.2f\n", calculo_estadual);
	printf("\nValor do salario liquido \x82 de R$ %.2f\n\n", salario_liquido);

	system("pause");
	return 0;
}