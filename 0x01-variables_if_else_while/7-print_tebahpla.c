#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declare variable letter with value 'z' */
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter); /* Print the current letter */
		letter--; /* Decrement letter by 1 to go to the next letter in ASCII */
	}

	putchar('\n'); /* Print a new line at the end */

	return (0);
}
