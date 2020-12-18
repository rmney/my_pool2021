#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;
	i = 2;
	if(nb == 0 || nb == 1)
		return(0);
	if(nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		return(0);
	else
		return(1);
}

int	main()
{
	printf("%d", ft_is_prime(1007));
	return(0);
}
		
