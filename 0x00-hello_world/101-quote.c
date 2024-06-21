#include <stdio.h>
#include <unistd.h>
/**
* main -Function Write which take 3 parameters first Understanding File Descriptors, Second take sentence, Third take length
*
*
*Return: return 1
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
