#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	char ch = 'a';

    for (; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
