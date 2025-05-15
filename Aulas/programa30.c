#include <stdio.h>

int main(){
	FILE *arq;
	char fruta[10];

	// Utilizando "a" se o arquivo não existir ele será criado.
	arq = fopen("frutas.txt", "a");  //append - adicionar

	if(arq){
		printf("Informe uma fruta, ou 0 para sair: \n");
		fgets(fruta, 10, stdin);  //stdin = standard input -> entrada padrão
		while(fruta[0] != '0'){
			fputs(fruta, arq);
			printf("Informe uma fruta, ou 0 para sair: \n");
			fgets(fruta, 10, stdin);
		}
	} else {
		printf("Não foi possível criar o arquivo.");
	}

	fclose(arq);

	return 0;
}
