#include <stdio.h>

int	ft(char c)
{
	return(c == ' ' || c == '\0' || c == '\n' || c == '-' || c == '+');
}

char	*ft_strcaptalize(char *str)
{
	int i;
	i = 0;

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z' && ft(str[i - 1]))
			str[i] = str[i] - 32;
		else if(str[i] >= 'A' && str[i] <= 'Z' && !ft(str[i - 1]))
			str[i] = str[i] + 32;
		i++;
	}
	return(str);
}

int	main()
{
	char x[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcaptalize(x));
	return(0);
}
