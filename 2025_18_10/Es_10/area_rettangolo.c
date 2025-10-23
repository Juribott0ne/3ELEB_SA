#include <stdio.h>
#include <stdlib.h>

//definisco le variabili

int base, altezza;

int main(){

    /*inserire il valore della base con scanf ed &*/
    printf("Inserire la base del rettangolo \n");
    scanf("%d", &base);

    /*inserire il valore dell' altezza con scanf ed &*/
    printf("Inserire l' altezza del rettangolo \n");
    scanf("%d", &altezza);

    /*creo le variabili e le formule per calcolare tali variabili e le faccio stampare con float*/
    float area = ((float)base * altezza);
    float perimetro = (((float)base + altezza)*2);

    printf("L' area del rettangolo è pari a (%d x %d) = %f \n", base, altezza, area);
    printf("Il suo perimetro invece è pari a (%d + %d)x2 = %f", base, altezza, perimetro);
    scanf("%d", &altezza);

    return 0;
}