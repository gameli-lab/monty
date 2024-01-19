include "monty.h"



int main(int ac, int **av)
{
	(void) av;

	if (ac != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	init_args();
	get_str(av[1]);

	while (getline(&args->line, &n. args->stream) 1= -1)
		printf("%s", args->line);

	return (0);
}
