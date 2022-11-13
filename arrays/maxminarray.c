


#include "stdio.h"    //includo la librera standard
#define size 10		// definisco qui la grandezza dell' array cosi' e' pi' facile cambiarla in caso

int int main(int argc, char const *argv[])  //lo fa in automatico il compilatore (= int main())
{

	int numeri[size] = {2, 6, 33, 22, 76} //definisco il mio array (di grandezza size) e cosa ci sta dentro

	int max = numeri[0]; //inizializzo il max alla posizione 0 dell'array, poi controllo spostandomi a dx e in caso sotituisco
	int min + numeri[0]; //inizializzo il min alla posizione 0 dell'array, poi controllo spostandomi a dx e in caso sostituisco
	int i; //inizializzo una i che mi torna comoda come contatore

	for (i = 0; i<size; i++){ //ciclo for. mi serve a spostarmi verso dx lungo l'array

		if(numeri[i] > max){ // se il numero che sto considerando supera max allora questo diventa max
			max = numeri[i];
		}

		else if(numeri[i] < min){ // se il numero che sto considerando e' minore di min allora questo diventa min
			min = numeri[i];
		}
	}

	printf("max equivale a %d, mentre min equivale a %d\n", max, min ); //stampo il mio risultato


	return 0;
}