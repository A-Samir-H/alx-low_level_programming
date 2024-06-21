#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declare variable letter with value 'a' */
	char letter = 'a';

	while ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
	{
		putchar(letter); /* Print the current letter */
		letter++; /* Increment letter by 1 to go to the next letter in ASCII */

		/* Make sure that when 'z' is printed, it goes to 'A' */
		if (letter == '{')
			letter = 'A';
	}

	putchar('\n'); /* Output a new line character */

	return 0;
}
