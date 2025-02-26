#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int	main(int argc, char *argv[])
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	if (argc == 1)
	{
		write(2, "File name missing\n", 18);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments\n", 19);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file\n", 17);
		return (1);
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
	{
		write(2, "Cannot read file\n", 17);
	}
	close(fd);
	return (0);
}

