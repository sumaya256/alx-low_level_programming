#include "main.h"
/**
*_strcat - concatenates 2 strings.
*@dest: pointer destination
*@src: source of pinter
*Return: void
*/
char *_strcat(char *dest, char *src)
{
	int a = -1, i
	for (i = 0; dest[i] != '\0'; i++)
	;
	do
{
	a++;
	dest[i] = src[a];
	i++;
}
	while (src[a] != '\0');
	return (dest);
}
