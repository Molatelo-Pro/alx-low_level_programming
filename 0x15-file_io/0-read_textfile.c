#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ep;
	ssize_t ski, new;
	char *dbg;

	if (!filename)
		return (0);

	ep = open(filename, O_RDONLY);

	if (ep == -1)
		return (0);

	dbg = malloc(sizeof(char) * (letters));
	if (!dbg)
		return (0);

	ski = read(ep, dbg, letters);
	new = write(STDOUT_FILENO, dbg, ski);

	close(ep);

	free(dbg);

	return (new);
}
