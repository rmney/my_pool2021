#include <stdio.h>


int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}


int		ft_find_next_prime(int nb)
{
	int i;
	int new;

	i = 2;
	new = nb;
	if (nb <= 1)
		return (2);
	while (ft_is_prime(new) == 0)
		new++;
	return (new);
}

	
int	main()
{
	printf("%d", ft_find_next_prime(13));
	return(0);
}
