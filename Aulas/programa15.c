#include <stdio.h>
//Matrizes - parte 2

int main(){
    //Matrizes de inteiros
    int numeros[2][2];
    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Numeros[%d][%d] vale %d\n", i, j, numeros[i][j]);
        }
    }
    
    return 0;
}
