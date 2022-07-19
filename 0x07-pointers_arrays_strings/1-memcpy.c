#include "main.h"
/**
*_memcpy - copies n bytes to the pointer of the pointer
*@dest: pointer to char parameters
*@src: pointer to char params
*@n: size
*@i: an integer
*Return: *dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
	for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
	return (dest);
}
