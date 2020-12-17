#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int y;
	int z;
	i = 0;
	z = 0;
	while(dest[i])
		i++;
	y = 0;
	while(src[y] && y < size && src[z])
	{
		dest[i] = src[y];
		i++;
		y++;
		z++;
	}
	dest[i] = '\0';
	return(z);
}

int	main()
{
	char x[] = "abc";
	char y[] = "zzqwssse";
	printf("%u\n", ft_strlcat(x, y, 15));
	printf("%s", x);
	return(0);}
