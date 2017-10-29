#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   /* Implemente um programa onde o operador possa digitar 3 valores eo
	programa execute as seguintes opera��es:
	a) A + B + C;
	b) (A + B) � (A + C)
	c) (A + B).(A � B) + A/C
	
	int num_a, num_b, num_c, num_resultado;
	printf("Exercicio A) A + B + C");
	printf("\nEntre com o n\xA3mero (A):\n\r");
	scanf("%d", &num_a);
	printf("\nEntre com o n\xA3mero (B):\n\r");
	scanf("%d", &num_b);
	printf("\nEntre com o n\xA3mero (C):\n\r");
	scanf("%d", &num_c);
	printf("\nProcessando o resultado . . .\n");
	num_resultado = num_a + num_b + num_c;
	printf("\nO resultado da opera\x87\x84o \x82: %2d.\n\n\n",num_resultado);
	system("pause");
	return 0;
    
	int num_a, num_b, num_c, num_resultado;
	printf("Exercicio B) (A + B)-(A + C) \n");
	printf("\nEntre com o n\xA3mero (A):\n\r");
	scanf("%d", &num_a);
	printf("\nEntre com o n\xA3mero (B):\n\r");
	scanf("%d", &num_b);
	printf("\nEntre com o n\xA3mero (C):\n\r");
	scanf("%d", &num_c);
	printf("\nProcessando o resultado . . .\n");
	num_resultado = (num_a+num_b) - (num_a + num_c);
	printf("\nO resultado \x82: %2d.\n\n\n",num_resultado);
	system("pause");
	return 0;
	*/
	int num_a, num_b, num_c, num_resultado;
	printf("Exercicio C) (A+B)*(A-B)+A/C\n");
	printf("\nEntre com o n\xA3mero (A):\n\r");
	scanf("%d", &num_a);
	printf("\nEntre com o n\xA3mero (B):\n\r");
	scanf("%d", &num_b);
	printf("\nEntre com o n\xA3mero (C):\n\r");
	scanf("%d", &num_c);
	printf("\nProcessando o resultado . . .\n");
	num_resultado = (num_a + num_b)*(num_a - num_b) + num_a / num_c;
	printf("\nO resultado \x82: %2d.\n\n\n", num_resultado);
	system("pause");
	return 0;
	
}