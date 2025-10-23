#include<stdio.h>
#include<stdlib.h>

/*Determino le variabili*/

int n = 10;
int m = 20;



int main(){

    /*Stampo la somma*/
    printf("somma= "); 
    printf("%d\n", n + m );
    /*Stampo la somma*/ 
    printf("sottrazione= "); 
    printf("%d\n", n - m );
    /*Stampo il prodotto*/ 
    printf("Moltiplicazione= "); 
    printf("%d\n", n * m ); 
    /*Stampola divisione*/
    printf("divisione= "); 
    printf("%d\n" , m / n);

    return 0;
}