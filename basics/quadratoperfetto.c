#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,i;

        do {                                                            // ciclo che mi serve a controllare che venga inserito un valore positivo o continua a chiedere di inserire numero
            printf("Inserisci un numero intero positivo: \n");
            scanf("%d", &a);
            } while(a<=0); // Controlla che il numero sia positivo


		for ( i = a; i > 0; --i)                // inizializzo i allo stesso valore di a
		{
			if (i * i == a) printf("il numero inserito, %d, e' un quadrato perfetto di %d \n", a, i ) ;  // provo, scalando verso il basso, tutte le combinazioni di i*i finche non corrisponde ad a
                                                                                                         // se corrisponde stampo che corrisponde

		}



	return 0;
}
