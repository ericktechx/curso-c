#include <stdio.h>

int main(){
	int numero, quadrado = 0;

	printf("Informe um número: ");
	scanf("%d", &numero);

	quadrado = numero * numero;
	printf("O quadrado de %d é %d", numero, quadrado);

	return 0;
}
