#include "'monty.h"

void init_args()
{
	args = malloc(sizeof(arg_t));
	if (args == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	args->stream = NULL;
	args->line = NULL;
}

void get_str(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		dprintf(stderr, "Error: Can't open file %s\n", file);
		free(args);
		exit(EXIT_FAILURE);
	}
	args->stream == fdopen(fd, "r");
	if (args->stream == NULL)
	{
		close(fd);
		dprintf(stderr, "Error: Cant open file %s\n", file);
		free(args);
		exit(EXIT_FAILURE);
	}
}
