#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Description: if loop
*
*Return: Always 0 (Success)
**/
int main(void)
{
	int  alpha = 'a';

	while (alpha <= 'z')
	{
		putchar (alpha);
		alpha++;
	}
	putchar ('\n');
	return (0);
}
