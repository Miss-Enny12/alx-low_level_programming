#include "main.h"
/**
 * _strcat - main function of prototype
 * @src: concatenation parameter
 * @dest: concatenation parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
{
	a++;
}
	while (src[b] != '\0')
{
	dest[a] = src[b];
	a++;
	b++;

}
	dest[a] = '\0';
	return (dest);
}
