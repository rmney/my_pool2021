#include <stdio.h>

int             ft_atoi_base(const char *str, int base)
{
	int i;
	int nbr;
	int sign;

	i = 0;
	nbr = 0;
	sign = 1;

	if(!str ||( base < 2 || base > 16))
		return(0);
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == '\r')
		i++;
	if(str[i] == '+' || str[i] == '-')
		if(str[i++] == '-')
			sign = -1;
		while(str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'f' || str[i] >= 'A' && str[i] <= 'F')
	{
		if(str[i] >= 'A' && str[i] <= 'F')
			nbr = (nbr * base) + (str[i] - 'A' + 10);
		 if(str[i] >= 'a' && str[i] <= 'f')
                       nbr = (nbr * base) + (str[i] - 'a' + 10);
		if(str[i] >= '0' && str[i] <= '9')
			nbr = (nbr * base) + (str[i] - '0');
		i++;
	}
	return(nbr * sign);
}

int	main()
{
	printf("%d", ft_atoi_base("F", 16));
	return(0);
}
