#include <stdio.h>
#include <stdlib.h>
#define	PROVAS_P1 2.0 
#define ATIVIDADES_P2 3.0
#define MEDIA_GERAL 7.0

int main(int argc, char *argv[]) {

	float calc_p1, calc_p2, calc_p3, calculo_geral, valor_temp_geral;
	int contador, aprovado;
	calc_p3 = calculo_geral = valor_temp_geral = 0;

	printf("\nCalculo de notas\n\nDivididas em 3 partes: \n( p1 = %d provas / p2 = %d atividades / p3 1 atividade)\n\n", PROVAS_P1, ATIVIDADES_P2);

	/*Calculo da P1, quantidade de provas definidas na constate (PROVAS_P1)*/
	for (contador = 1; contador <= PROVAS_P1; contador++)
	{
		printf("\nEntre com a nota da prova %d de %.f da p1\n", contador, PROVAS_P1);
		scanf("%f*c", &calculo_geral);
		valor_temp_geral += calculo_geral;

		if (contador == PROVAS_P1)
		{
			calc_p1 = (valor_temp_geral / PROVAS_P1) * 0.7;
			printf("\nParab\x82ns, Voc\x88 conseguiu %.2f pontos na p1 para a nota final\n\n", calc_p1);
			calculo_geral = valor_temp_geral = 0;
		}
	}
	/*Calculo da P2, quantidade de atividade definidas na constate (ATIVIDADES_P2)*/
	for (contador = 1; contador <= ATIVIDADES_P2; contador++)
	{
		printf("\nEntre com a nota da atividade %d de %.f da p2\n", contador, ATIVIDADES_P2);
		scanf("%f*c", &calculo_geral);
		valor_temp_geral += calculo_geral;

		if (contador == ATIVIDADES_P2)
		{
			calc_p2 = (valor_temp_geral / ATIVIDADES_P2) * 0.2 ;
			printf("\nParab\x82ns, Voc\x88 conseguiu %.2f pontos na p2 para a nota final\n\n", calc_p2);
			calculo_geral = valor_temp_geral = 0;
		}
	}
	/*Calculo da P3, apenas uma atividade*/
	printf("\nEntre com a nota da prova do professor\n");
	scanf("%f*c", &calculo_geral);
	calc_p3 += calculo_geral * 0.1;

	/*Calculos m�dia final e condi��o para aprova��o, difinida na constante (MEDIA_GERAL)*/
	valor_temp_geral = calc_p1 + calc_p2 + calc_p3;
	aprovado = valor_temp_geral > MEDIA_GERAL;

	/*Verifica se foi aprovado*/
	system("cls");
	if (aprovado)
	{
		printf("\nNossa media para ser aprovado \x82 %.2f \n\n", MEDIA_GERAL);
		printf("\nParab\x82ns, Voc\x88 conseguiu %.2f pontos na  media final, foi aprovado!\n\n", valor_temp_geral);
	}
	else
	{
		printf("\nNossa media para ser aprovado \x82 %.2f \n\n", MEDIA_GERAL);
		printf("\nQue pena, Voc\x88 conseguiu apenas %.2f pontos na  media final, foi reprovado!\n", valor_temp_geral);
	}
	system("pause");
	return 0;
}
