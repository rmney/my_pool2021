#include "../includes/ft.h"

void	ft_putstr(char *str)
{
	int u;
	u = 0;
	while(str[u])
		write(1, &str[u++], 1);
}
