#include <stdlib.h>

int	abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_rrange(int start, int end)
{
	int	i;
	int	j;
	int	n;
	int	*tab;

	n = 1 + abs(end - start);
	tab = malloc(sizeof(int) * n);
	if (start > end)
		j = 1;
	else
		j = -1;
	i = 0;
	while (i < n)
	{
		tab[i] = end;
		end += j;
		i++;
	}
	return (tab);
}
