#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int y;

	i = 0;
	while(dest[i])	
		i++;
	y = 0;
	while(src[y])
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return(dest);	
}
int	main()
{
	char x[] = "ryad";
	char y[] = "mney";
	printf("%s", ft_strcat(x, y));
	
	return(0);
}
