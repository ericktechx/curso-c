#include <stdio.h>

int main(){
	int numero = 1;
	int contador = 0;

	printf("Apresentando os 5 primeiro multiplos de 3: \n");
	while(contador < 5){
		if(numero % 3 == 0){
			printf("O número %d é multiplo de 3.\n", numero);
			contador = contador + 1;
		}
		numero = numero + 1;
	}

	return 0;
}
