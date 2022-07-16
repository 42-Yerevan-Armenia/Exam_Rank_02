int	ft_atoi(const char *str)
{
	int	i = 0;
	int	res = 0;
	int	neg = 1;

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;//ignore and pass
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')//check the minus
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);//char to int
		i++;
	}
	return (res * neg);
}
