#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declare variable 'letter' with value 'a' */
	char letter = 'a';

	while (letter <= 'z')
	{
		/* Check that letter is not equal to 'q' and 'e' */
		if (letter != 'q' && letter != 'e')
			putchar(letter); /* Print the current letter */

		letter++; /* Increment letter by 1 to go to the next letter in ASCII */
	}

	putchar('\n'); /* Output a new line character */

	return 0;
}

