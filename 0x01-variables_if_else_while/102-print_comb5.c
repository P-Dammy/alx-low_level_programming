#include <stdio.h>
#include <stdlib.h>
/**
* main - program will assign a random number to the variable
* n each time it is executed.
* DEscription: This program will assign a random number to the
* variable n each time is executed.
* Return: 0
*/
int main(void)
{
	int n1 = 0, n2;

	while (n1 <= 99)
	{
		n2 = n1;
		while (n2 <= 99)
		{
			if (n1 != n2)
		{
			putchar((n1 / 10) + 48);
			putchar((n1 % 10) + 48);
			putchar(' ');
			putchar((n2 / 10) + 48);
			putchar((n2 % 10) + 48);

			if (n1 != 98 || n2 != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++n2;
		}
		++n1;
	}

putchar('\n');
return (0);
}
