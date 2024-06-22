#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num2;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = 1; num2 <= 9; num2++)
		{
			if (num != num2 && num < num2)
			{
				putchar(num + '0');
				putchar(num2 + '0');
				if (num != 8 || num2 != 9)
				{
					putchar(','); /* Print comma */
					putchar(' '); /* Print space */
				}
			}
		}
	}

	putchar('\n'); /* Print a new line at the end */

	return (0);
}

