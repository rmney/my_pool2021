#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int y;
	
	i = 0;
	y = 0;
	while(to_find[i])
	{
		if(str[y++] == to_find[i])
			i++;
		if(str[i])
			return(str);
	}
	return(0);
}
			
int	main()
{
	char x[] = "riad";
	char y[] = "mney   sss";
	printf("%s", ft_strstr(x, y));
	return(0);
}
