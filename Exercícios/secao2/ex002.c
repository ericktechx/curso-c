#include <stdio.h>

int main(){
	// Variáveis dos Números
	int num1;
	int num2;
	int num3;

	// Solicitar os números ao usuário
	printf("Digite o 1° número: ");
	scanf("%d", &num1);

	printf("Digite o 2° número: ");
	scanf("%d", &num2);

	printf("Digite o 3° número: ");
	scanf("%d", &num3);

	// Realizar a operação de (soma) entre os valores
	int soma = num1+ num2 + num3;

	// Imprimir o resultado
	printf("O resultado da soma é: %d", soma);

	return 0;
}
