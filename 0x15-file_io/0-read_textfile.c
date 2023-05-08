#include "main.h"
/**
* read_textfile - reads a textfile and writes it to POSIX
* @filename: the name of file
* @letters: number of letters to read and print
* Return: 0 if fill name is NULL, or fails to open or write fails
* else return the of letters it could read or write
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t num_read, num_written;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	num_read = read(fp, buff, letters);
	close(fp);

	num_written = write(STDOUT_FILENO, buff, num_read);

	free(buff);

	return (num_written);
}
