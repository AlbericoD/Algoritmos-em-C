#include <stdio.h>
#define NUMERO_TENTATIVAS 5

int main() {

	int numero_secreto, chute, acertou, maior, menor, acabou;
	numero_secreto = 100;

	for (int i = 1; i <= NUMERO_TENTATIVAS; i++)
	{
		printf("Qual o seu chute?\n\n ( %d de %d )\n", i, NUMERO_TENTATIVAS);
		scanf("%d*c", &chute);
		if (chute < 0)
		{
			printf("Voce nao pode chutar numeros negativos! \n");
			i--;
			continue;
		}
		acertou = (chute == numero_secreto);
		maior = (chute > numero_secreto);

		if (acertou)
		{
			printf("\nVoce acertou! o numero secreto \x82 %d\n\n", numero_secreto);
			break;
		}
		else if (maior)
		{
			printf("\nVoce errou!\n\n");
			printf("Valor menor %d \n", numero_secreto);
		}
		else
		{
			printf("\nVoce errou!\n\n");
			printf("Valor maior  \x82 %d \n", numero_secreto);
		}
	}
	system("pause");
	return 0;
}