#include <stdio.h>
//Estrutura de repetição
//while (enquanto)

/*
Utilizado quando você precisa de um loop
onde não se tenha um número fixo de elementos
mas que tenha um critério de parada e
antes de iniciar o loop a condição é checada.

Problema:
Faça um programa, no qual receba e some números
inteiro até que o número de entrada seja 0
e apresente a soma no final;
 */
int main(){
	int numero, soma = 0;

	//entrada
	printf("Informe um número: ");
	scanf("%d", &numero);

	while(numero != 0){
		soma = soma + numero;

		//entrada
		printf("Informe um número: ");
		scanf("%d", &numero);
	}
	printf("A soma de %d", soma);

	return 0;
}
