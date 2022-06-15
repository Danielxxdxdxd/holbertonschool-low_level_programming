#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number.
* @n: input number to determine its last digit.
* Return: last digit of n.
*/

int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');

	return (digit);
}
