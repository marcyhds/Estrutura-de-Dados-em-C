
/*
    TAD - NÚMEROS COMPLEXOS
    Feito por Marcela Neves Belchior
    Data: 28/08/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "nroComplexo.h"

int main(){

    Complexo *C1, *C2, *C3, *C4;
    float real, imag;

    printf("Informe a parte real do 1o nro: ");
    scanf("%f", &real);
    printf("Informe a parte imaginaria do 1o nro: ");
    scanf("%f", &imag);
    C1 = cria_nro(real,imag);
    if(C1==NULL){
        printf("Nao foi possivel criar o 1o numero complexo.\n");
        return -1;
    }

    printf("Informe a parte real do 2o nro: ");
    scanf("%f", &real);
    printf("Informe a parte imaginaria do 2o nro: ");
    scanf("%f", &imag);
    C2 = cria_nro(real,imag);
    if(C2==NULL){
        printf("Nao foi possivel criar o 2o numero complexo.\n");
        return -1;
    }

    printf("Informe a parte real do 3o nro: ");
    scanf("%f", &real);
    printf("Informe a parte imaginaria do 3o nro: ");
    scanf("%f", &imag);
    C3 = cria_nro(real,imag);
    if(C3==NULL){
        printf("Nao foi possivel criar o 3o numero complexo.\n");
        return -1;
    }

    C4 = mult(sub(C1,C3),C2);

    printf("O resultado da operação eh: \n");
    printComplexo(C4);

    libera_nro(&C1);
    libera_nro(&C2);
    libera_nro(&C3);
    libera_nro(&C4);
    return 0;
}
