#include "main.h"
/**
* print_alphabet_x10 - Make the alphabet x10 times
* Return: void
**/

void print_alphabet_x10(void)
{
	char i;
	int  k;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
		_putchar(i);
		}
	}
	_putchar('\n');
}
