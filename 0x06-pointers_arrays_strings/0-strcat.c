#include "main.h"

/**
 * _strcat -is the entrypoint
 * @dest: is a pointer
 * @src: is a pointer
 * Return: 0 if is a success
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0 ; dest[i] != '\0' ; i++)
{
}
for (j = 0 ; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
