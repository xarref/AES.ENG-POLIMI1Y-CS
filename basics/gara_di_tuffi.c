/*

Nelle gare di tuffi a 5 giudici il punteggio finale è doppio della somma dei
voti ottenuta eliminando il più alto ed il più basso.
Scrivere un programma che legga in input 5 valori e calcoli in uscita il
voto finale.
Esempio:
	8.0, 7.5, 7.5, 7.5, 7.0 = 22.5 x 2.0 = 45.0

Hints
• Utilizzare un ciclo
• Controllare ad ogni iterazione se il voto supera o è inferiore
rispettivamente al max o min trovato finora.


*/

#include <stdio.h>

#define grade_quantity 5

int main(int argc, char const *argv[]){


int values[grade_quantity];
int max = 0 , min = 10, a;

  printf("Enter 5 grades: ");

  // taking input and storing it in an array
  for (int i = 0; i < 5; ++i) {
	     scanf("%d", &values[i]);
	  }




  // calcolo il massimo e il minimo

  for (int k = 0; k < grade_quantity; ++k)
	  {

	  	if (values[k] > max) max = values[k];
	  	if (values[k] < min) min = values[k];
	  }
	 printf("i valori massimi e minimi da escludere sono %d e %d \n", max, min);



	// come se facessi:
	// a = values[0] + values[1] + values[2] + values[3] + values[4];
	 for (int i = 0; i < grade_quantity; ++i)
	 {
	 	a = a + values[i] ;
	 }



	printf("somma dei voti parziale", a);

	// moltiplico fuori la somma dei voti
	 int voto_finale = (a - max - min)*2;

	 printf("il voto finale e' %d\n", voto_finale );




}



//dataset di prova utilizzati

/*

10 9 9 9 1      risultato prima del *2: 27, poi 54		funziona
5 2 2 2 1       risultato prima del *2: 6, poi 12    	funziona


*/
