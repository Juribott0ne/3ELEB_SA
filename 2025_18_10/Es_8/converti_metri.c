#include <stdio.h>
#include <stdlib.h>

int main(){

    /*determino la variabile con una virgola*/
    float metri = 341.8;
    float metri = 341.8;

    /*faccio una stampa della conversione in cm utilizzando %f*/
    printf("La distanza %f m convertita in cm è pari a %f cm \n", metri, metri * 100);
    printf("La distanza %f m convertita in cm è pari a %f cm \n", metri, metri * 100);

   /*faccio una stampa della conversione in mm utilizzando %f*/
    printf("La distanza %f m convertita in mm è pari a %f mm \n", metri, metri * 1000);
    printf("La distanza %f m convertita in mm è pari a %f mm \n", metri, metri * 1000);

    /*faccio una stampa della conversione in km utilizzando %f*/
    printf("La distanza %f m convertita in km è pari a %f km \n", metri, metri/1000);
    printf("La distanza %f m convertita in km è pari a %f km \n", metri, metri/1000);

    return 0;
}