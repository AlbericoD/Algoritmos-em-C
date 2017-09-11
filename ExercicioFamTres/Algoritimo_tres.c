#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	/*Elabore um programa que pede seu nome, endereço, CEP e
	telefone. Ele deve imprirmir seu nome completo na primeira
	linha, seu endereço na segunda, e o CEP e telefone na
	terceira

	char nome[30], endereco[80];
	int cep_endereco, telefone;
	printf("\n\n");
	printf("\nQual \x82 o seu nome completo?\n");
	gets(nome);
	printf("\nQual \x82 o seu endere\x87o?");
	printf("\nModelo: Rua XXXXXXX, Bairro:XXXXXXXX, n\xF8:XXXX, Cidade: XXXXXXXX-XX \n");
	gets(endereco);
	printf("\nQual o  n\xF8 do CEP correspondente ao endere\x87o informado?");
	printf("\nModelo: xxxxxxxx  sem hifen \n");
	scanf("%d", &cep_endereco);
	printf("\nQual o n\xF8 de telefone ou celular para contato?");
	printf("\nModelo: xxxxxxxxxx sem hifen \n");
	scanf("%d", &telefone);
	printf("Cadastrando dados. . .\n");
	printf("\nNome: %s\n ",nome);
	printf("\nEndere\x87o: %s\n", endereco);
	printf("\nCEP: %2d\n", cep_endereco);
	printf("\nContato: %d\n", telefone);
	system("pause");
	return 0;
	*/
	/*Elabore um programa onde peça para inserir 5 nomes e
	suas respectivas idades. Calcule a idade em dias e horas de
	cada nome e depois imprima em tela os 5 nomes com as
	respectivas idades em anos, dias e horas. (não use nenhum
	laço de programação).
	char nome_zero[30], nome_um[30], nome_dois[30], nome_tres[30], nome_quatro[30];
	float idade_zero, idade_um, idade_dois, idade_tres, idade_quatro,
		dias_zero, dias_um, dias_dois, dias_tres, dias_quatro,
		horas_zero, horas_um, horas_dois, horas_tres, horas_quatro;
	int buffer = 29;

	printf("Insira 5 nomes com a respectiva idade, irei imprimir com mais detalhes\n\n ");

	printf("\nEntre com o primeiro nome:\n");
	fgets(nome_zero, buffer, stdin);
	printf("\nQual a idade em anos de %s \n", nome_zero);
	scanf("%f%*c", &idade_zero);
	system("cls");

	printf("\nEntre com o segundo nome:\n");
	fgets(nome_um, buffer, stdin);
	printf("\nQual a idade em anos de %s \n", nome_um);
	scanf("%f%*c", &idade_um);
	system("cls");

	printf("\nEntre com o terceiro nome:\n");
	fgets(nome_dois, buffer, stdin);
	printf("\nQual a idade em anos de %s \n", nome_dois);
	scanf("%f%*c", &idade_dois);
	system("cls");

	printf("\nEntre com o quarto nome:\n");
	fgets(nome_tres, buffer, stdin);
	printf("\nQual a idade em anos de \n", nome_tres);
	scanf("%f%*c", &idade_tres);
	system("cls");

	printf("\nEntre com o quinto nome:\n");
	fgets(nome_quatro, buffer, stdin);
	printf("\nQual a idade em anos de %s \n", nome_quatro);
	scanf("%f%*c", &idade_quatro);
	system("cls");

	printf("\nCalculando idade e anos. . .\n");
	dias_zero = idade_zero * 365; horas_zero = dias_zero * 24;
	dias_um = idade_um * 365; horas_um = dias_um * 24;
	dias_dois = idade_dois * 365; horas_dois = dias_dois * 24;
	dias_tres = idade_tres * 365; horas_tres = dias_tres * 24;
	dias_quatro = idade_quatro * 365; horas_quatro = dias_quatro * 24;

	printf("\nNome: %s \nIdade: %.f \nDias: %.0f \nHoras: %.f \n", nome_zero, idade_zero, dias_zero, horas_zero);
	printf("\nNome: %s \nIdade: %.f \nDias: %.0f \nHoras: %.f \n", nome_um, idade_um, dias_um, horas_um);
	printf("\nNome: %s \nIdade: %.f \nDias: %.0f \nHoras: %.f \n", nome_dois, idade_dois, dias_dois, horas_dois);
	printf("\nNome: %s \nIdade: %.f \nDias: %.0f \nHoras: %.f \n", nome_tres, idade_tres, dias_tres, horas_tres);
	printf("\nNome: %s \nIdade: %.f \nDias: %.0f \nHoras: %.f \n\n\n", nome_quatro, idade_quatro, dias_quatro, horas_quatro);
	system("pause");
	return 0;
	*/

}