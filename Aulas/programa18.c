#include <stdio.h>
//Usando Funções

void mensagem(){
    printf("Bem-Vindo!\n");
}

int soma(int num1, int num2){
    return num1 + num2;
}

void proximo_char(char caractere){
    printf("%c", caractere+1);
}

int main(){
    printf("ola...\n");

    mensagem();

    // int retorno = soma(4, 6);
    // printf("Retorno = %d", retorno);
    printf("Retorno = %d\n", soma(4, 6));

    char cara = 'a';
    proximo_char(cara);

    return 0;
}
