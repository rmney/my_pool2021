#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	int y;
	int len;
	char *str;
	len = 0;
	while(src[len])
		len++;
	i = 0;
	y = len - 1;
	str = (char *)malloc(sizeof(*str) * (len + 1));
	while(i <= y)
	{
		str[i] = src[i];
		++i;
	}
	free(str);	
	return(str);
}

int	main()
{
	char *x = "abcaaa";
	char *y = ft_strdup(x);
	printf("%s", y);
	return(0);
}
