#include "main.h"
/**
 * print_alphabet_x10-prints the alphabet 10 times
 *
 * returns void
 */
void print_alphabet_x10(void)
{
char b;
int l = 0;
	while (l < 10)
{
	b = 'a';
	while (b <= 'z')
{
	_putchar(b);
	b++;
}
	_putchar('\n');
	l++;
}

}
