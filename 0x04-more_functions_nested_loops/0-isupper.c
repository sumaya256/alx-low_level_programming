#include "main.h"
/**
*_isupper - Checks if C is uppercase character
*@c: character to be checked
*
*Return: 1 if c is uupercase ,0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
