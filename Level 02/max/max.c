int	max(int *tab, unsigned int len)
{
	int	max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
		return max;
}

#include <stdio.h>
int	main()
{
	int	tab[] = {555, 8, 3, -8, 963, 4156845};
	unsigned int	len = 4;
	printf("%d", max(tab, len));
}