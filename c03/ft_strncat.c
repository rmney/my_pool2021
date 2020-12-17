#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int y;

	i = 0;
	while(dest[i])
		i++;
	y = 0;
	while(src[y] &&  y < nb)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main()
{
	char x[] = "ryad";
	char y[] = "mney";

	printf("%s\n", ft_strncat(x, y, 3));
    
	return(0);
}
