/*

Scrivere un programma che, dati in ingresso due numeri interi positivi N
e K, stampa potenze di N con esponenti da 1 a K.
Esempio:
Base: 4
Esponente massimo: 4
Potenze: 4 16 64 256

*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]){

int N,K;

printf("inserisci un numero di cui fare tutte le potenze e fino a che potenza vuoi arrivare:\n");
scanf("%d %d", &N, &K);
printf("potenze:\n");

for (int i = 1; i <= K; ++i)  // ciclo for per fare le potenze da 1 al valore K
{
	int a;
	a = pow(N,i);   // libreria math.h

	printf("%d \n", a);
}






return 0;

}
