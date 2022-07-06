#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 4)
	{
		if (!argv[2][1] && !argv[3][1])//check if index 1 is '\0', if there is 1 letter
		{
			while (argv[1][i]!= '\0')
			{
				if (argv[1][i] == argv[2][0])//if in str[i] == search[i]
					write(1, &argv[3][0], 1);//replace and put it
				else
					write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
