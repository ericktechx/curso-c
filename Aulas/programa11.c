#include <stdio.h>
//Operações Matemáticas

/*
 Somar +
 subtrair -
 Multiplicar *
 Dividir /
 Elevar ao quadrado x * x
 módulo (resto da divisão de x por y) %
 */
int main(){
	int num1, num2, res;
	float resdiv;

	printf("Informe o num1: ");
	scanf("%d", &num1);

	printf("Informe o num2: ");
	scanf("%d", &num2);

	//soma
	res = num1 + num2;
	printf("A soma é %d\n", res);

	//subtração
	res = num2 - num1;
	printf("A subtração é %d\n", res);

	//multiplicação
	res = num1 * num2;
	printf("A multiplicação é %d\n", res);

	//dividir
	resdiv = (float)num1 / (float)num2;  //cast
	printf("A divisão é %f\n", resdiv);

	//elevar ao quadrado
	res = num1 * num1;
	printf("O quadrado de num1 é %d\n", res);

	//Módulo (Veriicando se o num1 é par ou ímpar)
	if(num1 % 2 == 0){
		printf("%d é par.\n", num1);
	}else{
		printf("%d é ímpar.\n",num1);
	}

	return 0;
}
