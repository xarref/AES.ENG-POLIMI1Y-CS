
/*
 * TAGS: array
 *
 * Trova il secondo numero piu' grande in un array non ordinato
 */


#include <limits.h>
#include <stdio.h>
#define SIZE 100

int main(int argc, char *argv[]) {
  int numbers[SIZE] = {15, 140, 154, 10, 2, -33, 10, -7, 4};

  int max1 = INT_MIN;               //rappresenta i numeri piu piccoli che possono essere definiti con int
  int max2 = INT_MIN;               //rappresenta i numeri piu piccoli che possono essere definiti con int

  int i;                            // il nostro contatore
  for (i = 0; i < SIZE; i++) {      //classico ciclo for
    if (numbers[i] > max1) {        //confronto ogni numero da sx a dx con il mio max 1
      max2 = max1;                  //rinomino il mio attuale massimo (max1) in max2
      max1 = numbers[i];            //ora posso sovrascrivere il valore precedente di max1 (ormai al sicuro nella variabile max2) nella variabile max1
    }
    else if (numbers[i] > max2 && numbers[i] < max1) {      //se trovo un numero compreso fra max2 (quello piu piccolo) e max1
      max2 = numbers[i];                                    //quel numero diventa il mio max2
    }                                                       // (max2<numbers[i]<max1       -->       max2<max1)
  }

  printf("il secondo numero piu grande dell'array: %d\n", max2);

  return 0;

}
