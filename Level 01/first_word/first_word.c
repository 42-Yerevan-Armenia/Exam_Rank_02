#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)// a.out "word"
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')//if there is any space or tab
			i++;//ignore them
		while (argv[1][i] != ' ' && argv[1][i] != '\0' && argv[1][i] != '\t')
		{//if there is no space, tab and end
			write(1, &argv[1][i], 1);//write av[1] 
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
