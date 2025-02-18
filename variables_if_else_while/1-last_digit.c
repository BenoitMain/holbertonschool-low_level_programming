#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Print random number and extract last number
*
* Return: 0
*/
int main(void)
{
	int n;
	int Last_Number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_Number = n % 10;

	if (Last_Number > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, Last_Number);
	}
	else if (Last_Number == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, Last_Number);
	}
	else if (Last_Number < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n,
	Last_Number);
	}
	return (0);
}
