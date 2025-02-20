#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* @jack_bauer = coutting minutes and hours
*
* Return: VOID
*/
void jack_bauer(void)
{
	int Heure;
	int minutes;

	for (Heure = 0; Heure < 24; Heure++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((Heure / 10) + '0');
			_putchar((Heure % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
