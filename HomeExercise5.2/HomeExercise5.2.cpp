#include <stdio.h>
#include <stdlib.h>
#define SIZE 500

/*
Home ex. 5.2:

Skriv et lille program(main) hvor i du g�r f�lgende :

1. Opret et array til hele tal med 500 pladser.

2. L�g tallene fra 1 til 500 ind i arrayet(der er kun EN fornuftig m�de at g�re
	dette p� � t�nk p� de overvejelser du gjorde dig i Home exercise 5.1 pkt. 2).
	3. Udskriv tallene fra arrayet.
*/

int main()
{
	int Array[SIZE] = {1};

	for (size_t i = 0; i < SIZE; i++)		//for loop der fylder hvert array plads op
	{
		Array[i] = i + 1;   //hver gang vi har v�ret igennem nr et eller andet array f.eks array 0 
	}						//l�gger den 1 til array 1 l�gger den til 1+1

	for (size_t i = 0; i < SIZE; i++)
		printf_s("\n%d", Array[i]);		//udskriver alle tal

	return 0;
}