#include <stdio.h>
#include <stdlib.h>

int main() {
    
    /*definisco tre numeri e tre pesi*/
    int n1 = 4;
    int n2 = 3;
    int n3 = 9;
    int p1 = 3;
    int p2 = 2;
    int p3 = 1;

    /*deermino la media pesata con la formula*/
    const int M = ((n1*p1)+(n2*p2)+(n3*p3))/p1 + p2 + p3;

    printf("%d \n", M);

    return 0;
}