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

// #include <unistd.h>

// int	main(int argc, char **argv)
// {
// 	int	set[128] = {0};
// 	int	i = 0;

// 	while (++i < 3)
// 	{
// 		int	j = -1;
// 		while (argv[i][++j])
// 		{
// 			if (!set[argv[i][j]])
// 			{
// 				set[argv[i][j]] = 1;
// 				write(1, &argv[i][j], 1);
// 			}
// 		}
// 	}
// 	return (0);
// }
