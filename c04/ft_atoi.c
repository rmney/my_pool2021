
char	ft_atoi(char *str)
{
	int i;
	int num;
	int sign;

	i = 0;
	num = 0;
	sign = 1;
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\f' || str[i] == '\0')
		i++;
	if(str[i] == '+' || str[i] == '-')
		if(str[i++] == '-')
			sign = -1;
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return(sign * num);
}

