#include <stdio.h>
int cont;
float media;
float somma;
float numero; 
int controllo_numero;

int main (void){
    do {
        printf("Inserisci numero\n");
        scanf("%f", &numero);

        controllo_numero = (int)numero;

        if(controllo_numero==numero && numero >= 0){
            cont++;
            media = ((somma+=numero)/(float)cont);
            printf("La tua media è %f", media);
        } else {
            printf("Inserisci valore valido\n");
        }
    } while (numero > 0);
    printf("La media finale è %f", media);
}