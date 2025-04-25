#include <stdio.h>
/*
Tipos de Dados

Tipos Numéricos:
 - Inteiros;
 - Reais;
 */
int main(){
	//inteiro
	int numero_inteiro; //7, 890, ...

	//reais
	float media; //23.4, 1.23, ...
	double outra_media; //23.4, 1.23, ...

	printf("Informe um número inteiro: ");
	scanf("%d", &numero_inteiro);

	printf("Informe um número real: ");
	scanf("%f", &media);

	printf("Infomer um número real: (Teste Double) ");
	scanf("%lf", &outra_media);

	printf("O numero inteiro foi %d    //    O numero real foi %.2f\n", numero_inteiro, media);
	printf("O numero double foi %lf", outra_media);

	return 0;
}
