#include <unistd.h>

void	print_union(char *a, char *b)
{
	char	c[128] = {0};
	int	i;

	while (*a != '\0')
	{
		i = *a;
		if (c[i] == 0)
		{
			write(1, a, 1);
			c[i] = 1;
		}
		a++;
	}
	while (*b != '\0')
	{
		i = *b;
		if (c[i] == 0)
		{
			write(1, b, 1);
			c[i] = 1;
		}
		b++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		print_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
