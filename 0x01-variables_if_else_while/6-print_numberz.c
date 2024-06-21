#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0'); /* Convert integer to corresponding ASCII digit */
	}

	putchar('\n'); /* Print a new line at the end */

	return (0);
}
