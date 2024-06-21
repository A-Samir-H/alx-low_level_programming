#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0'); /* Convert integer to corresponding ASCII digit */
		if (num < 9)
		{
			putchar(','); /* Print comma */
			putchar(' '); /* Print space */
		}
	}

	putchar('\n'); /* Print a new line at the end */

	return (0);
}
