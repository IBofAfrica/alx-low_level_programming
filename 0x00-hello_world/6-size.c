#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long);
	int d = sizeof(long long);
	int e = sizeof(float);

	printf("size of a char: %i bytes\n", a);
	printf("size of an int: %i bytes\n", b);
	printf("size of a long: %i bytes\n", c);
	printf("size of a long long %i bytes\n", d);
	printf("size of a float %i bytes\n", e);
	return (0);
}
