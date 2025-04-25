#include <stdio.h>

int main(){
	int numero, maior, menor = 0;

	for(int i = 0; i < 10; i++){
		printf("Informe o valor %d de 10: ", i + 1);
		scanf("%d", &numero);

		// No primeiro loop
		if(i == 0){
			maior = numero;
			menor = numero;
		}

		// Nos demais loops

		//Maior
		if(numero > maior){
			maior = numero;
		}

		//Menor
		if(numero < menor){
			menor = numero;
		}
	}
	printf("O maior valor é %d e o menor valor é %d", maior, menor);

	return 0;
}
