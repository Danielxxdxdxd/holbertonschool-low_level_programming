#include "main.h"

/**
* main - program that prints _putchar, followed by a new line.
* Return: Always 0 (Success)
*/

int main(void)
{
	char PUT[8] = "_putchar";
	int i;

	for (i = 0; i < 8 ; i++)
		_putchar(PUT[i]);
	_putchar('\n');
	return (0);
}
