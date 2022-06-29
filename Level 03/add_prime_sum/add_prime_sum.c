#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int		is_prime(int n)
{
	int i = 2;

	while (i < n)
	{
		if (n % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int		add_prime_sum(int n)
{
	int sum = 0;
	int i = 2;

	while (i <= n)
	{
		if (is_prime(i) == 1)
			sum += i;
		++i;
	}
	return (sum);
}

int		main(int argc, char **argv)
{
	int n;
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != 0)
		{
			n = n * 10 + (argv[1][i] - 48);
			i++;
		}
		ft_putnbr(add_prime_sum(n));
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
