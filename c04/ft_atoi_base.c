int     ft_check_all(char *base)
{
        int i;
        char *str;
        char *str2;
        int len;

        i = 0;
        str = "0123456789abcdef";
        len = 0;
          while(base[len])
              len++;
          if(!(len == 2 || len == 8 || len == 10 || len == 16))
                  return(0);
        while(base[i])
        {
                if(base[i] == str[i])
                i++;
        else
                return(0);

        }

        return(len);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int num;
	int sign;
	int base_2;
	base_2 = 0;

	i = 0;
	num = 0;
	sign = 1;

	while(str[i] == '\n' || str[i] == '\f' || str[i] == '\t' || str[i] == '\v' || str[i] == '\v')
		i++;
	if(str[i] == '+' || str[i] == '-')
		if(str[i++] == '-')
			sign = -1;
	while(str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'f' || str[i] >= 'A' && str[i] <= '9')
	{
		if(ft_check_all(base) == 10 && str[i] >= '0' && str[i] <= '9')
			num = num * 10 + (str[i] - '0');
		if(ft_check_all(base) == 16 && str[i] >= 'a' && str[i] <= 'f')
			num = num * 16 + (str[i] - 87);
		if(ft_check_all(base) == 8 && str[i] >= 0 && str[i] <= '7')
			num = num * 8 + (str[i] - '0');
		if(ft_check_all(base) == 2 && str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 2) + (str[i] - '0');
		}
		i++;
	}
	return(num * sign);
}
