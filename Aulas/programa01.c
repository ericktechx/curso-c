// Aula sobre Variáveis
#include <stdio.h>

// A chave delimita um bloco de código //

//(início)
int main(){
	//declarando variáveis
	int idade; //Inteiro

	//declarando e inicializando variáveis
	//int idade = 0;

	//Função para escrever algo na saída padrão (console)
	printf("Qual a sua idade? ");   //ponto e virgula finaliza um comando

	//Receber dados
	scanf("%d", &idade);

	//saída
	printf("A sua idade é %d", idade);

	return 0;
}
//(fim do bloco)
