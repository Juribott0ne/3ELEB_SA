#include <stdio.h>
#include <stdlib.h>

//definisco le variabili

int base, altezza;

int main(){

    /*chiedo di inserire il valore della base con scanf ed &*/
    printf("Inserire la base del triangolo \n");
    scanf("%d", &base);

    /*chiedo di inserire il valore dell' altezza con scanf ed &*/
    printf("Inserire l' altezza del triangolo \n");
    scanf("%d", &altezza);

    /*creo l' area e la formula per calcolarla e la faccio stampare con float*/
    float area = (base * altezza)/2.00;
    
    printf("L' area del triangolo è pari a (%d x %d)/2 = %f \n", base, altezza, area);
    scanf("%d", &altezza);

    return 0;
}
