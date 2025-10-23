#include <stdio.h>
#include <stdlib.h>

int main() {

    /*definisco le due variabili con la virgola*/
    float distanza = 900;
    float velocità = 123;

    /*faccio stampare il tempo*/
    printf("Arriverai a destinazione tra %f h \n", (distanza/velocità));

    return 0;
}