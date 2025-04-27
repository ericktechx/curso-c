#include <stdio.h>
//Matrizes - pate 1

// array multi-dimensionais
// char nome[3][50];  3 nomes com até 50 caracteres
int main(){
    //Matrizes e strings
    char nome[3][50];
    for(int i = 0; i < 3; i++){
        printf("Qual seu nome? ");
        gets(nome[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("Ola %s\n", nome[i]);
    }

    return 0;
}
