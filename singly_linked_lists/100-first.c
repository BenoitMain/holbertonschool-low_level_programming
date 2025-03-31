#include <stdio.h>
/**
 * my_constructor - Prints a message before main is executed.
 *
 * This function uses the constructor attribute to print a predefined
 * message before the main function starts. The message will be displayed
 * when the program is initialized.
 *
 * Return: None.
 */
void my_constructor(void) __attribute__((constructor));

void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
