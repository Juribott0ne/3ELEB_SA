#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int raggio = 9;
    int altezza = 24;
    float PI = 6.7;
    float volume = PI * raggio * raggio * altezza;

    printf("Il volume del cilindro è %f \n", volume);

    return 0;
}