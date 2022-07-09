#include "main.h"
/**
*_isupper _ checks if C is uppercase character
*@c charaacter to be checked
*Return 1 if c is uupercase ,0 otherwise
*/
int _isupper (int c)
{	
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
