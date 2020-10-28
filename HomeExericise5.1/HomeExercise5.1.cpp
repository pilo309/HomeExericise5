#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 6			//den er ikke rigtigt 6 men SIZE-1 da den starter fra 0

/*

Home ex. 5.1:

Skriv et lille program(main) hvor i du gør følgende :

1. Opret et array til decimaltal med 6 pladser.

2. Læg tallene fra 10.0 til 15.0 ind i arrayet(dette kan gøres på flere forskellige
	måder – overvej hvordan det kan gøres og hvad der er nemmest og hvad der
	er bedst – det er ikke nødvendigvis det samme ).

	3. Udskriv tallene fra arrayet.

	4. Læg derefter 5 til alle tal i arrayet(NB!Dette skal gøres i en for - løkke).

	5. Udskriv igen tallene fra arrayet.
	
	*/


int main()
{
	int Array[SIZE];

	srand(time(0));
	
	int a = 10; //begyndelsesværdien
	int b = 15; //slutværdien

	for (size_t i = 0; i < SIZE; i++)			//for loop der går fra 0 til 5
		Array[i] = rand() % (b - a + 1) + a;		//fylde hvert array med random tal fra 10 til 15


	for (size_t i = 0; i < SIZE; i++)
		printf_s("\n%d ", Array[i]);			//udskriver arrays

	for (size_t i = 0; i < SIZE; i++)
		Array[i] += 5;							//adderer 5 til hvert array

	puts("");

	for (size_t i = 0; i < SIZE; i++)
		printf_s("\n%d ", Array[i]);			//udskriver de forhøjede arrays

	return 0;
}