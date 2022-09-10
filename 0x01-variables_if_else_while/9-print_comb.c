#include <stdio.h>
/**
* main - program will assign a random number to the variable
* n each time it is executed.
* DEscription: This program will assign a random number to the
* variable n each time is executed.
* Return: 0
*/
int main(void)
{
	int c;

	for (c = 48 ; c <= 57 ; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
