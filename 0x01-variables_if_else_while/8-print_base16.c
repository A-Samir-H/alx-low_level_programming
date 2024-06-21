#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Print digits 0-9 */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	/* Print letters a-f */
	for (i = 0; i < 6; i++)
	{
		putchar(i + 'a');
	}

	putchar('\n'); /* Print a new line at the end */

	return (0);
}
