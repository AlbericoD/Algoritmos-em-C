#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    /*Elabore um programa que pede seu nome, endere�o, CEP e
	telefone. Ele deve imprirmir seu nome completo na primeira
	linha, seu endere�o na segunda, e o CEP e telefone na
	terceira
	*/
	char primeiro_nome[15], segundo_nome[25], endereco[80];
	int cep_endereco, telefone;
	printf("\n\n");
	printf("\nQual o seu primeiro nome?\n");
	scanf("%s", &primeiro_nome);
	printf("\nQual o seu sobrenome?\n");
	scanf("%s", &segundo_nome);
	printf("\nQual o seu endere\x87o?\r");
	printf("\nModelo: Rua XXXXXXX, Bairro:XXXXXXXX, n\xF8:XXXX, Cidade: XXXXXXXX-XX \n\r");
	scanf("%s", &endereco);
	printf("\nQual o  n\xF8 do CEP correspondente ao endere\x87o cadastrado?\r");
	printf("\nModelo: xxxxxxxx  sem hifen \n\r");
	scanf("%d", &cep_endereco);
	printf("\nQual o n\xF8 de telefone ou celular para contato?\r");
	printf("\nModelo: xxxxxxxxxx sem hifen \n\r");
	scanf("%d", &telefone);
	printf("Cadastrando dados. . .\n");
	printf("\nNome: %2s %1s\n ", primeiro_nome, segundo_nome);
	printf("\nEndere\x87o: %s\n", endereco);
	printf("\nCEP: %d\n", cep_endereco);
	printf("\nContato: %d\n", telefone);
	system("pause");
	return 0;
}