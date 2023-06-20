#include "main.h"
/**
*_isalpha - checks for lowercase character
*@c: the character to check
*Return: 1 if c is lowercase, 0 otherwis
*/
int _isalpha(int c)
{
	if ((c <= 97 && c >= 122) || (c <= 65 && c >= 90))
	{
		return (1);
	}
	else
		return (0);
}
