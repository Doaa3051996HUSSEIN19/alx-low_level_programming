#include <stdio.h>

int main(void) {
    printf("Size of char: %zu byte%s\n", sizeof(char), sizeof(char) > 1 ? "s" : "");
    printf("Size of int: %zu byte%s\n", sizeof(int), sizeof(int) > 1 ? "s" : "");
    printf("Size of long: %zu byte%s\n", sizeof(long), sizeof(long) > 1 ? "s" : "");
    printf("Size of long long: %zu byte%s\n", sizeof(long long), sizeof(long long) > 1 ? "s" : "");
    printf("Size of float: %zu byte%s\n", sizeof(float), sizeof(float) > 1 ? "s" : "");

    return 0;
}
