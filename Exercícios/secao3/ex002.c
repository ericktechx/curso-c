#include <stdio.h>

int main(){
	//Declaração de Variáveis
	int nota1, nota2, nota3, nota4 = 0;
	int media = 0;

	//Entrada do usuário
	printf("Digite a primeira nota: ");
	scanf("%d", &nota1);

	printf("Digite a segunda nota: ");
	scanf("%d", &nota2);

	printf("Digite a terceira nota: ");
	scanf("%d", &nota3);

	printf("Digite a quarta nota: ");
	scanf("%d", &nota4);

	//Processamento
	if(nota1 > 0 && nota1 <= 10 && nota2 > 0 && nota2 <= 10 && nota3 > 0 && nota3 <= 10 && nota4 > 0 && nota4 <= 10){
		int somaT = 0;

		somaT = nota1 + nota2 + nota3 + nota4;
		media = somaT / 4;
	}else{
		printf("Nota inválida. Tente Novamente.");
	}

	//Saída
	printf("A média de notas é: %d", media);

	return 0;
}
