#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_TENTATIVAS 15

int main() {

	int numero_secreto, chute, acertou, maior, menor, acabou, segundos = time(0), numero_random = rand();
	float pontos = 1000;

	srand(time);
	numero_secreto = numero_random % 100;

	for (int i = 1; i <= NUMERO_TENTATIVAS; i++)
	{
		printf("Qual o seu chute?\n\n ( %d de %d )\n", i, NUMERO_TENTATIVAS);
		scanf("%d*c", &chute);
		acertou = (chute == numero_secreto);
		maior = (chute > numero_secreto);

		if (acertou)
		{
			printf("\nVoce acertou! o numero secreto \x82 %d\n\n", numero_secreto);
			pontos += abs(chute) / (float)NUMERO_TENTATIVAS;
			printf("\nPontos finais %.2f\n", pontos);
			break;
		}
		else if (maior)
		{
			printf("\nVoce errou!\n\n");
			pontos -= abs(chute) / (float)NUMERO_TENTATIVAS;
			printf("\nPontos Atuais %.2f\n", pontos);
		}
		else
		{
			printf("\nVoce errou!\n\n");
			pontos -= abs(chute) / (float)NUMERO_TENTATIVAS;
			printf("\nPontos Atuais %.2f\n", pontos);
		}
	}
	system("pause");
	return 0;
}