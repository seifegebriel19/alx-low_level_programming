#include "main.h"

/**
 * print_numbers - prints numbers from 0 t0 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int i;
i = 0;
while (i < 10)
{
_putchar (i + '0');
i++;
}
_putchar ('\n');
}

