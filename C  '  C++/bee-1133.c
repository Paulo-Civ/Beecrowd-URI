/*
    Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão 
    dele por 5 for igual a 2 ou igual a 3.

    Entrada
    O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não necessariamente em ordem crescente.

    Saída
    Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.
*/


#include <stdio.h>

int main() {

    int x, y, i;

    scanf("%d %d", &x,&y);

    if(x<y){
        for(i =x+1; i<y; i++){
            if(i%5 == 2 || i%5 == 3) printf("%d\n", i);
        }
    } if (x>y) {
        for(i =y+1; i<x; i++){
            if(i%5 == 2 || i%5 == 3) printf("%d\n", i);
        }
    }

    return 0;
}