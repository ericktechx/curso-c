#include <stdio.h>
//Tipos de Dados

//Booleanos (verdadeiro/falso) True/False

/*
Na linguagem C, não existe um tipo de dado boolean

Mas ....

A Linguagem C, reconhece o valor 0 como Falso
e qualque valor diferente de 0 como verdadeiro
 */
int main(){
	int booleano = 2;

	if(booleano){
		printf("Verdadeiro...");
	}else{
		printf("Falso...");
	}

	return 0;
}
