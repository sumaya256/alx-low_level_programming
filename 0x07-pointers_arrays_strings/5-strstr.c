#include "main.h"
/**
 * _strstr - finds the first occurrence of needle
 * in the haystack string
 *
 * @haystack: the string where the substring needle
 * would be searched for
 * @needle: the substring to be found
 *
 * Return: pointer to substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;
	while (*haystack != '\0')
{
	h = haystack;
	n = needle;
	while (*haystack != '\0' && *haystack == *n)
{
	haystack++;
	n++;
}
	if (!*n)
	return (h);
	haystack = h + 1;
}
	return (0);
}
