#include <stdio.h>

int main(){
    int valor = 2;
    printf("Valor vale %d\n", valor);

    //deslocamento de bits para esquerda
    valor = valor << 2;
    printf("Valor vale %d\n", valor);

    valor = 2;
    //deslocamento para direita
    valor = valor >> 1;
    printf("Valor vale %d\n", valor);

    valor = 2;
    valor = ~valor;
    printf("Valor vale %d\n", valor);

    return 0;
}
