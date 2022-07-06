int	find_char(const char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (find_char(*s1, s2) == 1)
			return ((char *)s1);
		s1++;
	}
	return (0);
}

// char	*ft_strpbrk(const char *s1, const char *s2)
// {
// 	int i = 0;

// 	while (*s1)
// 	{
// 		if (*s1 == s2[i])
// 		{
// 			return ((char *)s1);
// 			i++;
// 		}
// 		s1++;
// 	}
// 	return (0);
// }