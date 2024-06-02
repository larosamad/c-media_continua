// Leggi una sequenza di lunghezza ignota a priori di numeri interi positivi
// Il programma a partire dal primo numero introdotto stampa ogni volta la media di tutti i numeri introdotto
// Terminare quando il numero inserito è negativo
#include <stdio.h>
int cont = 0, somma = 0, n_test;
float n = 0, media;

int main(void)
{
    while (n >= 0){
        do { 
            printf("Inserisci numero");
            scanf("%f", &n);
            n_test = (int)n;
            }
        while ((n_test != n) && (n>0));

        if(n>0){
        cont++;
        media = ((somma += n) / (float)cont);
        printf("La media è %f", media);
        } else {
            printf("La media finale è %f", media);
        }
    }
    return 0;
}