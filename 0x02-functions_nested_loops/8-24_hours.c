#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
{
	int hour, minute;

	for (minute = 0; minute <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar(((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}

