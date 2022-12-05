#include "main.h"


int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
