#include <stdio.h>

/**
 * main - Entry point of the size program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    printf("Size of an int: %ld\n", sizeof(int));
    printf("Size of a float: %ld\n", sizeof(float));
    printf("Size of a char: %ld\n", sizeof(char));
    printf("Size of a long long int: %ld\n", sizeof(long long int));
    printf("Size of a long int: %ld\n", sizeof(long int));

    return 0;
}
