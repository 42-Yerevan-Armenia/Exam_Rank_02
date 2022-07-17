char	*ft_strrev(char *str)
{
	int	i = 0;
	int	len = 0;
	char	tmp;

	while(str[len] != '\0')//ft_strlen
		len++;
	len--;
	while (len > i)
	{
		tmp = str[i];//swap
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}
