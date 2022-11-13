/*
 * Dato un numero positivo Q, scrivere la sua rappresentazione in binario
 * naturale, applicando il tradizionale algoritmo per divisioni successive
 *  • in questo esercizio l’output sarà da leggersi da destra a sinistra
 *  • indicare anche il minimo numero di bit utilizzato.
 *
 * Esempio
 * Q: 19 in notazione decimale
 * In binario naturale (invertito) codificato su 5 bit
 * Q : 11001   con 5 bit
 */


#include <stdio.h>
#include <stdlib.h>

int main(){ 

unsigned x; // lo dichiaro unsigned cosi almeno non devo stare a pensare ai segni


  do {                                                  //usiamo do while perche il ciclo viene runnato almeno una volta prima di essere valutato
    printf("Inserisci un intero positivo\n");
    scanf("%u", &x);
  } while (x <= 0);       //condizione necessaria dal momento che andiamo a dividere finche non arriviamo a zero

int i;


while(x>0){     // va avanti fino a quando c'e' qualcosa da dividere, cioe finche la x e' positiva

  printf("%u", (x %2 ));          // questo ci trova il valore del bit (trovando un numero e dando il resto come output)
  x = x/2;                        // qua invece ci occupiamo di dividere il numero appena preso in considerazione per due
  i++;                            // questo e' il nostro contatore di bit, ogni volta che eseguiamo questo loop aumenta.

}

printf("\n");
printf("il numero di bit utilizzati --> %i \n", i );    // diamo in output il numero finale





return 0;

}
