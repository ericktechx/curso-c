#include <stdio.h>
//Escrevendo Funções

//Estrutura das funções
/*
 - tipo de retorno
 - nome
 - parâmetros de entrada (opcional)
 - implementação
 - retorno (opcional)
*/
void mensagem(){
    printf("Bem-Vindo!");
}

int soma(int num1, int num2){
    return num1 + num2;
}

void proximo_char(char caractere){
    printf("%c", caractere+1);
}

int main(){
    printf("ola...");
    return 0;
}
