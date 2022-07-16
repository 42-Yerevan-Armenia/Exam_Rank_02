#include <unistd.h>

void capitalizer(char *str)
{
	int i = 0;

	while (str[i] != '\0')//making all line lowercase
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == '\0'))//if lower and next is the end
			str[i] -= 32;
		else if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] =='\t'))//if the next is space or tab
			str[i] -= 32;
		write (1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	int i = 1;

	if (argc > 1)
	{
		while (argv[i])
		{
			capitalizer(argv[i]);
			write (1,"\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}