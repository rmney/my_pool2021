#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	i = 1;
	if( nb < 0 || nb == 0)
		return(0);
	while(i * i < nb)
		i++;
	if((nb % i) == 0)
		return(i);
	else
		return(0);
}

int	main()
{
	printf("%d", ft_sqrt(81));
	return(0);
}
