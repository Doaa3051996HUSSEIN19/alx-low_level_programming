#include "main.h"

/*
* main - tests function that prints if integer is positive or negative 
* Description:positive_or_negative function
*determine greater, iqual or less than zero.
* @param i The number to be checked.
**/

void positive_or_negative(int i)

{
	if (i > 0)
	{
		printf("%d is %s/n", i, "positive");
	}
	else if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}
