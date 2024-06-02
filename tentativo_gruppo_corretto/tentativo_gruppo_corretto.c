#include <stdio.h>
int cont=0, a, somma;
float media, n=1;

int main (void){
    while (n>0)
    {
        printf("Inserisci un numero, negativo per interrompere");
        scanf("%f", &n);
        a=(int)n;

        if((a==n) && (a>=0)){
            somma = somma +a;
            cont++;
            media=(float)somma/(float)cont;
            printf("La media attuale è %0.4f", media);
        }
        else{
            printf("Il numero inserito non è intero o negativo, non è stato conteggiato");
        }
    }
    printf("La media finale è %0.4f", media);
    return 0;
}