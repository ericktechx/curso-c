#include <stdio.h>

int main(){
	// Declaração de Variáveis Globais
	int valor1, valor2, valor3 = 0;
	int somaTotal = 0;

	// Entrada
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);

	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);

	printf("Digite o terceiro valor: ");
	scanf("%d", &valor3);

	// Processamento
	if(valor1 > 0 && valor2 > 0 && valor3 > 0){
		// Declaração de Variáveis de Escopo
		int s1, s2, s3 = 0;

		// Soma de Valores e Saída para o usuário
		s1 = valor1 * valor1;
		printf("O quadrado do Valor 1 é: %d\n", s1);

		s2 = valor2 * valor2;
		printf("O quadrado do Valor 2 é: %d\n", s2);

		s3 = valor3 * valor3;
		printf("O quadrado do Valor 3 é: %d\n", s3);

		// Soma de todos os quadrados
		somaTotal = s1 + s2 + s3;
	}
	else{
		printf("Número inválido. Tente novamente!");
	}

	// Saída
	printf("A Soma do Quadrado dos número é: %d", somaTotal);

	return 0;
}
