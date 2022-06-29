#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;//if space or tab ignor them
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (argv[1][i+1] > 32 && argv[1][i+1] != '\0')
					write (1, "   ", 3);
			}// if not printable and end, ignor. else put 3 space
			else if (argv[1][i] != ' ' && argv[1][i] != '\t')
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return 0;
}