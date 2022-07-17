#include <stdlib.h>

int	abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_range(int start, int end)
{
	int	size = end - start;
	int	*i;
	int	*j;

	size = abs(size);
	if (size)
	{
		j = (int *)malloc(sizeof(int) * size);
		if (j)
		{
			i = j;
			while (start > end)
			{
				*j = start;
				j++;
				start--;
			}
			while (start <= end)
			{
				*j = start;
				j++;
				start++;
			}
			return (i);
		}
	}
	else
	{
		j = malloc(sizeof(int) * 1);
		*j = 0;
	}
	return (j);
}
