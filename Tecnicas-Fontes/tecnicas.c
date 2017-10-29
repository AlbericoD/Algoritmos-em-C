#include <stdio.h>
#include <stdlib.h>
int main() {

	/*Sintese de exemplos para estudos*/
	
	/*Modificadores de tipo */
	unsigned int numero_itens;
	long int numero_muito_grande;
	
	/*Combinando os modificadores de tipo unsigned e long*/
	unsigned long int valor_muito_grande;
	
	/*Modificador de tipo register*/
	register int contador;
	register unsigned sinaliz_status;

	/*Modificador de tipo short*/
	short int valor_chave;
	short int numero_pequeno;

	/*Omitindo int das declara��es modificadas*/
	unsigned omitido;
	short omitimo_pequeno;
	long omitido_grande;

	/*Modificador de tipo signed*/
	signed char valor_byte;
	signed char escolha_menu;

	/*Tipos customizados*/
	typedef unsigned long int ULINT;
	ULINT minhavariavel;
	/*Casting, cuidar para n�o perder a precis�o*/
	int a,b = 3;
	double pontos = a /(double)b;
	/*valor absoluto*/
	abs(b);

	getchar();
	return 0;
}