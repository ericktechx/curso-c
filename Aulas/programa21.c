#include <stdio.h>

//endereço de memória, como parâmentro de entrada
void incrementa(int* contador){
	// valor++; valor = valor + 1
	// valor--; valor = valor - 1
	// operação antes de variavel, incrementa primeiro e depois imprime

	printf("Antes de incrementar.\n");
	printf("O contador vale %d\n", (*contador)); //valor
	printf("O endereço de memória é %d\n", contador); //endereço de memória

	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", ++(*contador));
	printf("O endereço de memória é %d\n", contador);
}

int main(){
	// quando declaramos uma variável, a linguagem C
	// aloca um espaço em memória para colocar
	// este valor.
	int contador = 10;

	printf("Contador vale %d\n", contador);
	printf("O contador vale %d\n", contador);
	printf("O endereço de memória é %d\n", &contador);

	//cópia por valor
	incrementa(&contador);

	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endereço de memória é %d\n", &contador);

	return 0;
}
