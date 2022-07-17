char is_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return(c);
}

int digit_in_base(char c, int base)
{
    int max = 0;

    if (base <= 10)
        max = base + '0';
    else
        max = base - (10 + 'a');

    if (c >= '0' && c <= '9' && c <= max)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= max)
        return (10 + c -'a');
    else
        return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int res = 0;
    int n;
    
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while ((n = digit_in_base(is_lower(*str),str_base) >= 0))
    {
        res *= str_base;
        res = res + (n * sign);
        str++;
    }
    return (res);
}
