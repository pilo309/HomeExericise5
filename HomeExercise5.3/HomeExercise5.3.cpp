#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 7

/*
Home ex. 5.3:

Skriv et lille program(main) hvor i du g�r f�lgende :

1. Opret et array til hele tal med 7 pladser

2. L�g 7 tilf�ldige tal mellem 1 og 36 ind i arrayet(jvf.afsnit 5.10 i bogen).

3. Udskriv derefter tallene fra arrayet p� �n linje med space mellem hvert tal.
*/

int main(void)
{
	int Array[SIZE];

	srand(time(0)); //g�r de tilf�ldige tal HELT tilf�ldige

	int a = 1;		//min random v�rdi
	int b = 36;		//max random v�rdi

	for (size_t i = 0; i < SIZE; i++)
		Array[i] = rand() % (b - a + 1) + a;

	for (size_t i = 0; i < SIZE; i++)
		printf_s("%d\n", Array[i]);

	return 0;
}