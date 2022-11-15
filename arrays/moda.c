/*
 *  Si codifichi un programma C che legge da stdin una sequenza (di lunghezza
 *  arbitraria) di interi positivi, ciascuno dei quali con un valore compreso
 *  nell’intervallo 1...M (M arbitrariamente scelto dal programmatore).
 *  L’acquisizione della sequenza termina inserendo il valore 0. Il programma
 *  deve visualizzare sullo schermo (stdout) un messaggio che riporta la Moda
 *  della sequenza di valori inserita.
 *
 *  La Moda è il valore più popolare della sequenza, cioé quello che compare il
 *  maggior numero di volte.
 *
 *  Potrebbe esserci più di un valore che rappresenta la Moda; stamparli tutti.
 *
 * TODO casa: Provare a pensare ad una possibile ottimizzazione nel caso in cui
 * ci interessi stampare solo un valore della moda.
 */


#include <stdio.h>
#include <math.h>

#define M 5

int main() {


int array[M] = {0},n,max,moda,a;
max = 0;


do                      // ciclo do while perche cosi verifichi la condizione alla fine
{

    printf("inserisci valori numerici compresi fra zero e %d e per finire digita 0\n", M );
    scanf("%d", &n);                                //aquisiamo i valori
    if (n>0 && n <= M)                              //verifichiamo le condizioni di esistenza
    {
        a = n-1;                                    // inizializziamo a in modo che possiamo inserirla dentro all array
        array[a] = array[a]+1;                      // la posizione dell array e shiftata di uno rispetto ai numeri che stiamo considerando noi, aggiungiamo uno alla quantita cosi
                                                                               // 1 2 3 4 5 // numeri possibili
                                                                               // 0 1 2 3 4 // posizioni array
                                                                               // 0 0 0 0 0 // quantita'

    }
    else{

        printf("impara a leggere testa di cazzo\n");   //feedback che l utente si merita
    }

} while (n != 0);  // la condizione resta che n sia diverso da zero perche n=0 fa partire tutto


//iniziano i calcoli
    for (int i = 0; i < M; ++i)  //ciclo sentinella con cui ci spostiamo da sx verso dx
    {
        if (array[i] > max) //se da sx verso dx incontriamo un valore superiore all ultimo max registrato lo sostituiamo
        {
            max = array[i];
            moda = i+1;
        }



}


printf(" la moda e %d e compare %d volte\n", moda, max );   //feedbackl finale


// 1 2 3 4 5 // numeri possibili
// 0 1 2 3 4 // posizioni array
// 0 0 0 0 0 // quantita'

return 0;
}
