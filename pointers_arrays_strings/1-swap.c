#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: First variable to check and swap.
 * @b: Second variable to check and swap.¬
 *
 */
void swap_int(int *a, int *b)
{
int c = 0;

c = *b;
*b = *a;
*a = c;
}
