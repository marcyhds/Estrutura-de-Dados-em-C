
/*
    TAD - ESFERA
    Feito por Marcela Neves Belchior
    Data: 29/08/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "esfera.h"

int main()
{
    Esfera *E;
    Ponto *P1, *P2;
    double x, y, z, aux;

    P1 = cria_pto();
    P2 = cria_pto();

    printf("Insira as coordenadas x, y e z do 1o ponto da esfera: \n");
    scanf("%lf %lf %lf", &x, &y, &z);
    if(set_value(P1,x,y,z)==NULL){
        printf("Nao foi possivel criar o 1o ponto.\n");
        return -1;
    }
    printf("Insira as coordenadas x, y e z do 2o ponto da esfera: \n");
    scanf("%lf %lf %lf", &x, &y, &z);
    if(set_value(P2,x,y,z)==NULL){
        printf("Nao foi possivel criar o 2o ponto.\n");
        return -1;
    }

    E = cria_esfera(P1,P2);
    if(E==NULL){
        printf("Nao foi possivel criar a esfera.\n");
        return -1;
    }

    raio(E, &aux);
    printf("\nRaio: %.2f\n", aux);
    area(E, &aux);
    printf("Area: %.2f\n", aux);
    volume(E, &aux);
    printf("Volume : %.2f\n", aux);

    libera_esfera(&E);
    delete(&P1);
    delete(&P2);

    return 0;
}
