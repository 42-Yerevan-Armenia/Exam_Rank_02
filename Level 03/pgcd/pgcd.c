#include <stdio.h>
#include <stdlib.h>

void	pgcd(int a, int b)
{
	int	i = a;

	while (i > 0)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d", i);
			return ;
		}
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return 0;
}
