#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

int		main(int argc, char **argv)
{
	int	i = 0;
	int	j = 1;
	int n;

	if (argc == 2)
	{
		while (argv[1][i] != 0)
		{
			n = n * 10 + (argv[1][i] - 48);
			i++;
		}
		while (j <= 9)
		{
			ft_putnbr(j);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(j * n);
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
