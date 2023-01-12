#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened
 * @file_from - file from
 * @file_to - file to
 * @argv - arguments vector
 *
 * Return: no return
 */

void error_file(int file_from, int file_to, *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", 
				argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",				argv[1]);
		exit(99);
	}

/**
 * main - check the code for Holberton School students
 * @argc - number of arguments
 * @argv - arguments vector
 * 
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	size_t len, w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	len = 1024;
	
