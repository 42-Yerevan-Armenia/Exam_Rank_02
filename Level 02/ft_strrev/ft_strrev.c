char	*ft_strrev(char *str)
{
	int	i = 0;
	int	len;
	char	tmp;

	while(str[len] != '\0')
		len++;
	len--;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}
