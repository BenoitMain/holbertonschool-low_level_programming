#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @array: The string to be encoded.
 *
 * Return: array.
 */
char *leet(char *array)
{
	char *letter = "aAeEoOtTlL";
	char *number = "4433007711";
	int i = 0, j;

	while (array[i] != '\0')
	{
		for (j = 0 ; j <= 10; j++)
		{
			if (array[i] == letter[j])
			{
				array[i] = number[j];
			}
		}
		i++;
	}
	return (array);
}

