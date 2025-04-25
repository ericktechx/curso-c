#include <stdio.h>
/*
Tipos de Dados

Tipos Alfanuméricos:
  - Characteres;
  - Strings;

 * Na linguagem C, não existe o tipo de dado String.

*/
int main(){
	//Declaração de uma string em C
	char nome[50];  //até 49 caracteres;

	printf("Qual é seu nome? ");
	gets(nome);

	printf("Seu nome é %s", nome);

	return 0;
}
