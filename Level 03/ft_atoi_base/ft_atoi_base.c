int        ft_atoi_base(const char *str, int base)
{
    int n;
    int i = 0;
    int sign = 1;
    int num = 0;

    if (!str || (base < 2 || base > 16))
        return (0);
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
            str[i] == '\f' || str[i] == ' ' || str[i] == '\r')
        i++;
    if ((str[i] =='-' || str[i] == '+') && str[i++] == '-')
        sign *= -1;
    while (str[i])
    {
        n = str[i];
        if (n >= '0' && n <= '9')
            n -= '0';
        else if (n >= 'a' && n <= 'f')
            n -= 'a' - 10;
        else if (n >= 'A' && n <= 'F')
            n -= 'A' - 10;
        else 
            return (0);
        num = num * base + n;
        i++;
    }
    return (sign * num);
}
