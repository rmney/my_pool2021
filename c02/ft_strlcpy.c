#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int y;
	i = 0;
	y = 0;
	while(src[i] && i < size && src[y])
	{	
		dest[i] = src[i];
		i++;
		y++;
	}
	dest[i] = '\0';
	return(y);
}

int	main()
{
	char x[] = "abc";
	char y[] = "aert";
	ft_strlcpy(x, y, 5);
	printf("the copied string is %s the len is %d", x, ft_strlcpy(x, y, 5));
	return(0);
}
	
		
	
