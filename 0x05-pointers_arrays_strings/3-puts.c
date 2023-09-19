#include <stdio.h>
/**
 * _puts -  function name
 * @str: function parameter
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	putchar (str[a]);
	putchar ('\n');
}
