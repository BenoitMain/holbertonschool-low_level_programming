#include <unistd.h>
#include <stddef.h>
/**
  * _strlen - Calculates the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);

}
/**
 * main - Prints a quote to the standard error.
 *
 * Return: Always 1 (error code).
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, _strlen(quote));

		return (1);
}
