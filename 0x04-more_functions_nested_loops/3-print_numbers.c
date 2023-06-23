#include "main.h"
/**
 * print_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = '0';

	if (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_puthar("\n");
}
