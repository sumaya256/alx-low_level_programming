#include "main.h"
/**
*_strpbrk - searches a string for any of a set bytes.
*@s: first string.
*@accept: second string.
*Return: a pointer to the byte in s or accept or null.
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
	for (i = 0; *(s + 1) != '\0'; i++)
{
	for (j = 0; *(accept + j) != '\0'; j++)
{
	if (*(s + i) == *(accept + j))
	return (s + i);
}
}
	return ('\0');
}

