#include<stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	int Colonne_a = 0;
	int Colonne_b = 0;
	int Colonne_c = 0;

	while( Colonne_a <= 7)
	{
		if(Colonne_b <= 8)
		{
			if( Colonne_c <= 9)
			{
				if( Colonne_b < Colonne_c)
				{
					putchar((Colonne_b / 10) + '0');
					putchar((Colonne_b % 10) + '0');
				}
				putchar((Colonne_a / 10) + '0');
				putchar((Colonne_a % 10) + '0');


