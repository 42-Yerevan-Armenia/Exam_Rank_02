#include <stdlib.h>

size_t	ft_abs(int n)//ignoring -
{
	if (n < 0)
		return (-n);
	return (n);
}

size_t	ft_count(int n)
{
	size_t	c = 0;

	if (n <= 0)
		c++;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	size = ft_count(n);//geting string size for malloc
	str = malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (NULL);
	str[size] = '\0';//put the end to the last index
	if (n == 0)//check 0
		str[0] = '0';
	else if (n < 0)//check minus
		str[0] = '-';
	while (n != 0)
	{
		str[--size] = ft_abs(n % 10) + '0';//int to char
		n /= 10;
	}
	return (str);
}
