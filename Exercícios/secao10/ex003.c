#include <stdio.h>

int main(){
	FILE *arq;
	char nome_arquivo[12];
	char caractere = 0;
	int conta_caractere = 0;

	printf("Informe o nome do arquivo a ser aberto: ");
	fgets(nome_arquivo, 12, stdin);

	printf("Informe o caractere a ser pesquisado: ");
	scanf(" %c", &caractere);

	arq = fopen(nome_arquivo, "r");

	if(arq){
		for(char c = getc(arq); c != EOF; c = getc(arq)){
			if(c == caractere){
				conta_caractere = conta_caractere + 1;
			}
		}
		printf("Existe(m) %d caracteres(s) '%c' no arquivo %s", conta_caractere, caractere, nome_arquivo);
	} else {
		printf("Não foi possível abrir o arquivo.");
	}

	fclose(arq);
	arq = NULL;

	return 0;
}
