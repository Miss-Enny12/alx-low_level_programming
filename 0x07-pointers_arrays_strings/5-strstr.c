#include "main.h"
/**
 * _strstr - main funtion
 * @haystack: function parameter
 * @needle: function parameter
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
{
	char *M = haystack;
	char *P = needle;

	while (*M == *P && *P != '\0')
{
	M++;
	P++;
}
	if (*P == '\0')
	return (haystack);
}
	return (0);
}


