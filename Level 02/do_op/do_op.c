#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	num1 = atoi(argv[1]);//for digit
	int	num2 = atoi(argv[3]);//for digit
	int	op = argv[2][0];//operator is character
	int	res = 0;

	if (argc == 4)
	{
		// if(av[2][1] == '\0')
		// {
		// 	if (av[1][i] != '\0' && av[3][i] != '\0')
		// 	{
		if (op == '+')
			res = num1 + num2;
		else if (op == '-')
			res = num1 - num2;
		else if (op == '*')
			res = num1 * num2;
		else if (op == '/')
			res = num1 / num2;
		else if (op == '%')
			res = num1 % num2;
		printf("%d\n", res);
		// 	}
		// }
	}
	else
		write(1, "\n", 1);
	return (0);
}
