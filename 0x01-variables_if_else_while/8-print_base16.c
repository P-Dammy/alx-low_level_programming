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
char c;
for (c = '0' ; c <= '9' ; c++)
{
	putchar(c);
}
for (c = 'a' ; c <= 'f' ; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
