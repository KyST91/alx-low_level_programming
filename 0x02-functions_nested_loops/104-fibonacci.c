#include "main.h"
#include <stdio.h>

void fibonacci(void);

/**
 * 104-fibonacci -  prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 *
 *
 * Return void
 */
int main(void)
{
	fibonacci();
	return 0;
}

void fibonacci(void)
{
	int count;
	int number = 1;
	int prevNumber = 0;
	int fibonacci;

	for(count = 0; count < 98; count++){
	   fibonacci = number + prevNumber;

	   _putchar((int)fibonacci);
	   _putchar(',');
	   _putchar(' ');

	   prevNumber = number;
	   number = fibonacci;
	}

	_putchar('\n');
}
