#include <libc.h>

char	**ft_split(char *str)
{
	char **tab;
	int i = 0;
	int j;

	tab = (char **)malloc(sizeof(char *) * 1000);//1000 is random size
	if (!tab)
		return (NULL);
	while (*str)
	{
		tab[i] = malloc(1000);//1000 is random size
		while (*str && (*str == ' ' || *str == '\t'))
			str++;
		j = 0;
		while (*str && (*str != ' ' || *str != '\t'))
			tab[i][j++] = *str++;
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
