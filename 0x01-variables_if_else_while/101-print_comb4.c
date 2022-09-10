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
	int n1 = 0, n2, n3;

	while (n1 <= 9)
	{
		n2 = 0;
		while (n2 <= 9)
		{
			n3 = 0;
			while (n3 <= 9)
			{
				if (n1 != n2 && n1 < n2 && n2 != n3 && n2 < n3)
				{
					putchar(n1 + 48);
					putchar(n2 + 48);
					putchar(n3 + 48);

					if (n1 + n2 + n3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++n3;
			}
			++n2;
		}
		++n1;
	}
	putchar('\n');
	return (0);
}
