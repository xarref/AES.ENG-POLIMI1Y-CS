
//stabilire se un numero sia pari o dispari



#include <stdio.h>  //standard lib

int main(){
int x;											 //inizializzo la variabile x

printf("inserisci un numero: \n");				//chiedo un numero all utente
scanf("%d", &x);								//scannerizzo il numero 

printf("%d e' un numero ", x);



if (x%2 == 0)									//se il numero diviso due fa zero allora e' pari
{
	printf("pari\n");
}

else {
	printf("dispari\n");						//altrimenti e' dispari
}

	return 0;
}
