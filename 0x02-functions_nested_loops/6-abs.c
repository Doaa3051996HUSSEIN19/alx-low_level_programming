#include "main.h"

/**
* _abs - gives the absolute value
* of an integer.
*
* @n: input number as an integer.
*
* Return: absolute value
*/
int _abs(int n)
{
	if (n < 0)
	{
		int absolute_val;

		absolute_val = n * -1;
		return (absolute_val);
	}
	return (n);

}

