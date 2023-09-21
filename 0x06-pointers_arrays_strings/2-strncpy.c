#include "main.h"
/**
 * _strncpy - the function of this code
 * @src: function parameter
 * @dest: function parameter
 * @n: function parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
{
	dest[a] = src[a];
	a++;
}
	while (a < n)
{
	dest[a] = '\0';
	a++;
}
	return (dest);
}
