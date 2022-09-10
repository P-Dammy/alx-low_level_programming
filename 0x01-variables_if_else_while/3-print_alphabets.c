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
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
