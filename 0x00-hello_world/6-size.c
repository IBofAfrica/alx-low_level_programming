#include <stdio.h>

/**
*main - entry point
*
*Return: 0
*/

int main(void)

{

	int a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long);
	int d = sizeof(long long);
	int e = sizeof(float);

	printf("size of a char: %i byte(s)\n", a);
	printf("Size of an int: %i byte(s)\n", b);
	printf("Size of a long int: %i byte(s)\n", c);
	printf("Size of a long long int: %i byte(s)\n", d);
	printf("Size of a float: %i byte(s)\n", e);
	return (0);

}
