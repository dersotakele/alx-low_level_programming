#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_cont)
{
	int fd;
	int mletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_cont)
		text_cont = "";

	for (mletters = 0; text_cont[mletters]; mletters++)
		;

	rwr = write(fd, text_cont, mletters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
